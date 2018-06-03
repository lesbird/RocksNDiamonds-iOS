//
//  GameCenterInterface.m
//  RocksNDiamonds
//
//  Created by Les Bird on 11/14/17.
//  Copyright © 2017 Les Bird. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>
#include "../../SDL/SDL2-2.0.8-11687/src/video/uikit/SDL_uikitappdelegate.h"
#include "system.h"
#include "main.h"

GKPlayer *player;

#define OVERALL_SCORE "EMOVERALL"
#define LEVELS_WON "EMWINS"
#define UNTIMED_SCORE "EMUNTIMED"

#ifdef EMM

#define RNDEM "EMOVERALL"
#define RNDEM2 "EMWINS"
#define RNDEM3 "EMUNTIMED"

char *gameCenterID[7] =
{
	RNDEM,
	RNDEM2,
	RNDEM3
};

char *levelNames[77] =
{
	"emc_amiga_mine_01",			// 0
	"emc_amiga_mine_02",			// 1
	"emc_amiga_mine_03",			// 2
	"emc_amiga_mine_04",			// 3
	"emc_amiga_mine_05",			// 4
	"emc_amiga_mine_12",			// 5
	"emc_amiga_mine_13",			// 6
	"emc_amiga_mine_14",			// 7
	"emc_amiga_mine_15",			// 8
	"emc_amiga_mine_16",			// 9
	"emc_amiga_mine_17",			// 10
	"emc_amiga_mine_18",			// 11
	"emc_amiga_mine_19",			// 12
	"emc_amiga_mine_20",			// 13
	"emc_amiga_mine_21",			// 14
	"emc_amiga_mine_22",			// 15
	"emc_amiga_mine_23",			// 16
	"emc_amiga_mine_24",			// 17
	"emc_amiga_mine_25",			// 18
	"emc_emerald_mine_01",			// 19
	"emc_emerald_mine_02",			// 20
	"emc_emerald_mine_03",			// 21
	"emc_emerald_mine_03_pro",		// 22
	"emc_emerald_mine_04",			// 23
	"emc_emerald_mine_04_pro_extra",// 24
	"emc_emerald_mine_05",			// 25
	"emc_emerald_mine_06",			// 26
	"emc_emerald_mine_07",			// 27
	"emc_emerald_mine_08",			// 28
	"emc_emerald_mine_09",			// 29
	"emc_emerald_mine_10",			// 30
	"emc_emerald_mine_11",			// 31
	"emc_emerald_mine_12",			// 32
	"emc_emerald_mine_13",			// 33
	"emc_emerald_mine_14",			// 34
	"emc_emerald_mine_15",			// 35
	"emc_emerald_mine_16",			// 36
	"emc_emerald_mine_17",			// 37
	"emc_emerald_mine_18",			// 38
	"emc_emerald_mine_19",			// 39
	"emc_emerald_mine_20",			// 40
	"emc_emerald_mine_21",			// 41
	"emc_emerald_mine_22",			// 42
	"emc_emerald_mine_23",			// 43
	"emc_emerald_mine_final",		// 44
	"emc_emerald_mine_pro",			// 45
	"emc_no_one_mine_01",			// 46
	"emc_no_one_mine_02",			// 47
	"emc_no_one_mine_03",			// 48
	"emc_no_one_mine_04",			// 49
	"emc_no_one_mine_05",			// 50
	"emc_no_one_mine_06",			// 51
	"emc_no_one_mine_07",			// 52
	"emc_no_one_mine_08",			// 53
	"emc_no_one_mine_09",			// 54
	"emc_no_one_mine_10",			// 55
	"emc_no_one_mine_11",			// 56
	"emc_no_one_mine_12",			// 57
	"emc_no_one_mine_13",			// 58
	"emc_no_one_mine_14",			// 59
	"emc_no_one_mine_15",			// 60
	"emc_no_one_mine_16",			// 61
	"emc_no_one_mine_17",			// 62
	"emc_no_one_mine_18",			// 63
	"emc_no_one_mine_19",			// 64
	"emc_no_one_mine_20",			// 65
	"emc_normal_mine_01",			// 66
	"emc_normal_mine_02",			// 67
	"emc_normal_mine_03",			// 68
	"emc_normal_mine_04",			// 69
	"emc_normal_mine_05",			// 70
	"emc_normal_mine_06",			// 71
	"emc_normal_mine_07",			// 72
	"emc_normal_mine_08",			// 73
	"emc_normal_mine_09",			// 74
	"emc_normal_mine_10",			// 75
	"rnd_tutorial_niko_boehm"		// 76
};

#define SCORE_ARRAY_SIZE (200 * 100)// 100 level packs * 200 maps each
int scoreArray[SCORE_ARRAY_SIZE];

#else

#define RNDEM "EM_HIGHSCORE"
#define RNDEM2 "EM2_HIGHSCORE"
#define RNDEM3 "EM3_HIGHSCORE"
#define RNDEMC "EMC_HIGHSCORE"
#define RNDBD "BD_HIGHSCORE"
#define RNDSP "SP_HIGHSCORE"
#define RNDSK "SK_HIGHSCORE"

char *gameCenterID[7] =
{
	RNDEM,
	RNDEM2,
	RNDEM3,
	RNDBD,
	RNDSP,
	RNDSK,
	RNDEMC
};

char *levelNames[7] =
{
	"classic_emerald_mine",
	"classic_emerald_mine2",
	"classic_emerald_mine3",
	"classic_boulderdash",
	"classic_supaplex",
	"classic_sokoban",
	"emc_"
};

#define SCORE_ARRAY_SIZE MAX_LEVELS
int scoreArray[SCORE_ARRAY_SIZE];

#endif

#define NUMSCORES 50
NSArray *topScores;

BOOL scoreSubmitSuccess;
char *currentLeaderboardId;

extern char *getScoreFilename(int nr);

@interface GameCenterInterface : NSObject<GKGameCenterControllerDelegate>

@end

@interface GameCenterInterface ()

@end

GameCenterInterface *gameCenterInterfacePtr;

@implementation GameCenterInterface

void AuthenticateLocalPlayer()
{
	[GameCenterInterface authenticateLocalPlayer];
	
	gameCenterInterfacePtr = [[GameCenterInterface alloc] init];
	currentLeaderboardId = gameCenterID[0];
}

void LoadScores(char *filename, int nr)
{
	// load score data from "filename.scores"
	NSString *path;
	NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	path = [paths objectAtIndex:0];
	path = [path stringByAppendingPathComponent:[NSString stringWithUTF8String:filename]];
	
	NSLog(@"LoadScore filename=%s nr=%d", [path UTF8String], nr);

	//NSString *path;
	//NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	//path = [paths objectAtIndex:0];
	//path = [path stringByAppendingPathComponent:[NSString stringWithUTF8String:filename]];
	//path = [path stringByAppendingString:[NSString stringWithFormat:@"%05d.scores", nr]];

	//NSLog(@"LoadScore filename=%s", [path UTF8String]);
	
	FILE *fp = NULL;
	if ([[NSFileManager defaultManager] fileExistsAtPath:path])
	{
        NSLog(@"File loaded");
		fp = fopen([path UTF8String], "rb");
		fread(scoreArray, sizeof(scoreArray), 1, fp);
		fclose(fp);
	}
	else
	{
		NSLog(@"File does not exist");
	}
}

void SaveScores(char *filename, int nr)
{
	// save score data to "filename.scores"
	NSString *path;
	NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	path = [paths objectAtIndex:0];
	path = [path stringByAppendingPathComponent:[NSString stringWithUTF8String:filename]];
	//path = [path stringByAppendingString:[NSString stringWithFormat:@"%05d.scores", nr]];

	NSLog(@"SaveScore filename=%s", [path UTF8String]);

	//File exists
	FILE *fp = NULL;
	fp = fopen([path UTF8String], "wb");
	if (fp != NULL)
	{
		fwrite(scoreArray, sizeof(scoreArray), 1, fp);
		NSLog(@"Save score successful");
		fclose(fp);
	}
}

void SubmitScores(int level_nr, int score)
{
	char *filename = getScoreFilename(level_nr);
	
#ifdef EMM
	// also "emscoresuntimed"
	LoadScores("emscores", 0);
	for (int i = 0; i < 77; i++) // only 77 level packs included (allocated room for 100)
	{
		if (strstr(filename, levelNames[i]) != NULL)
		{
			int idx = (i * 200) + level_nr;
			scoreArray[idx] = score;
			
			int wins = 0;
			int overall = 0;
			for (int n = 0; n < SCORE_ARRAY_SIZE; n++)
			{
				overall += scoreArray[n];
				if (scoreArray[n] != 0)
				{
					wins++;
				}
			}
			
			SaveScores("emscores", 0);
			
			NSLog(@"GAMECENTER: submit score %d to %s for level name %s", overall, gameCenterID[0], levelNames[i]);
			
			[GameCenterInterface submitScore:gameCenterID[0] score:overall];
			[GameCenterInterface submitScore:gameCenterID[1] score:wins];

			return;
		}
	}
#else
	for (int i = 0; i < 7; i++)
	{
		if (strstr(filename, levelNames[i]) != NULL)
		{
			LoadScores(levelNames[i], level_nr);

			scoreArray[level_nr] = score;
			
			int overall = 0;
			for (int n = 0; n < SCORE_ARRAY_SIZE; n++)
			{
                if (scoreArray[n] > 0)
                {
                    NSLog(@"Level %d = %d points", n, scoreArray[n]);
                }
				overall += scoreArray[n];
			}
			
			SaveScores(levelNames[i], level_nr);
			
			NSLog(@"GAMECENTER: submit score %d to %s for level name %s", overall, gameCenterID[i], levelNames[i]);

			[GameCenterInterface submitScore:gameCenterID[i] score:overall];
			
			return;
		}
	}
	NSLog(@"GAMECENTER: level not recognized");
#endif
}

const char *GetPlayerNameAndScore(int rank, int *score)
{
	if (rank < topScores.count)
	{
		GKScore *s = (GKScore *)topScores[rank];
		*score = (int)s.value;
		
		return [s.player.displayName UTF8String];
	}
	*score = 0;
	return NULL;
}

void GetCurrentTopScores()
{
	NSLog(@"GetCurrentTopScores()");
	
	//[GameCenterInterface getTopScores:currentLeaderboardId];
}

void ShowGameCenterLeaderboard()
{
	if (![[GKLocalPlayer localPlayer] isAuthenticated])
	{
		return;
	}
	
	if (currentLeaderboardId == nil)
	{
		currentLeaderboardId = gameCenterID[0];
	}
	NSString *l = [NSString stringWithUTF8String:currentLeaderboardId];
	[GameCenterInterface showLeaderboard:l];
}

-(void)gameCenterViewControllerDidFinish:(GKGameCenterViewController *)gameCenterViewController
{
	[gameCenterViewController dismissViewControllerAnimated:YES completion:nil];
}

+(void)showLeaderboard:(NSString*)leaderboardID
{
	if (![[GKLocalPlayer localPlayer] isAuthenticated])
	{
		return;
	}
	
	GKGameCenterViewController *gameCenterController = [[GKGameCenterViewController alloc] init];
	if (gameCenterController != nil)
	{
		UIWindow *wdw = [[SDLUIKitDelegate sharedAppDelegate] window];
		gameCenterController.gameCenterDelegate = gameCenterInterfacePtr;
#if !TARGET_OS_TV
		gameCenterController.viewState = GKGameCenterViewControllerStateLeaderboards;
		gameCenterController.leaderboardTimeScope = GKLeaderboardTimeScopeToday;
#endif
		[wdw.rootViewController presentViewController:gameCenterController animated:YES completion:nil];
	}
}

+(void)authenticateLocalPlayer
{
	GKLocalPlayer *localPlayer = [GKLocalPlayer localPlayer];
	localPlayer.authenticateHandler = ^(UIViewController *viewController, NSError *error)
	{
		if (viewController != nil)
		{
			NSLog(@"authenticateLocalPlayer viewController != nil");
		}
		else if (localPlayer.isAuthenticated)
		{
			NSLog(@"authenticateLocalPlayer localPlayer.isAuthenticated");
		}
		else
		{
			NSLog(@"authenticateLocalPlayer player not authenticated");
		}
	};
}

+(void)submitScore:(char *)leaderboardId score:(int)score
{
	NSLog(@"submitScore %s score=%d", leaderboardId, score);
	
	if (![[GKLocalPlayer localPlayer] isAuthenticated])
	{
		return;
	}
	
	GKScore *scoreReporter = [[GKScore alloc] initWithLeaderboardIdentifier:[NSString stringWithUTF8String:leaderboardId]];
	scoreReporter.value = (int64_t)score;
	scoreReporter.context = 0;
	
	NSArray *scores = @[scoreReporter];
	[GKScore reportScores:scores withCompletionHandler:^(NSError *error)
	{
		NSLog(@"reportScores %s completed error=%@", leaderboardId, error);
		currentLeaderboardId = leaderboardId;
		GetCurrentTopScores();
	}];
}

+(void)getTopScores:(char *)leaderboardId
{
	if (![[GKLocalPlayer localPlayer] isAuthenticated])
	{
		return;
	}
	
	GKLeaderboard *leaderboardRequest = [[GKLeaderboard alloc] init];
	if (leaderboardRequest != nil)
	{
		leaderboardRequest.playerScope = GKLeaderboardPlayerScopeGlobal;
		leaderboardRequest.timeScope = GKLeaderboardTimeScopeAllTime;
		leaderboardRequest.identifier = [NSString stringWithUTF8String:leaderboardId];
		leaderboardRequest.range = NSMakeRange(1, NUMSCORES);
		[leaderboardRequest loadScoresWithCompletionHandler: ^(NSArray *scores, NSError *error)
		{
			if (error != nil)
			{
				// Handle the error.
				NSLog(@"getTopScores %@", error);
			}
			if (scores != nil)
			{
				// Process the score information.
				topScores = scores.copy;

				/*
				NSLog(@"topScores num=%d", topScores.count);

				for (int i = 0; i < topScores.count; i++)
				{
					GKScore *s = (GKScore *)topScores[i];
					NSLog(@"%d %@ %lld", s.rank, s.player.displayName, s.value);
					const char *name = [s.player.displayName UTF8String];
					strncpy(highscore[i].Name, name, 10);
					highscore[i].Score = (int)s.value;
				}
				 */
			}
		}];
	}
}

@end

