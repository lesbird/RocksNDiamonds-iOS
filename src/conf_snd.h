// ============================================================================
// Rocks'n'Diamonds - McDuffin Strikes Back!
// ----------------------------------------------------------------------------
// (c) 1995-2014 by Artsoft Entertainment
//                  Holger Schemel
//                  info@artsoft.org
//                  http://www.artsoft.org/
// ----------------------------------------------------------------------------
// conf_snd.h
// ============================================================================

/* ----- this file was automatically generated -- do not edit by hand ----- */

#ifndef CONF_SND_H
#define CONF_SND_H

/* values for sounds configuration */

#define SND_CLASS_DEFAULT_DIGGING			0
#define SND_CLASS_DEFAULT_COLLECTING			1
#define SND_CLASS_DEFAULT_SNAPPING			2
#define SND_CLASS_DEFAULT_PUSHING			3
#define SND_CLASS_DEFAULT_IMPACT			4
#define SND_CLASS_DEFAULT_WALKING			5
#define SND_CLASS_DEFAULT_PASSING			6
#define SND_CLASS_DEFAULT_DYING				7
#define SND_CLASS_DEFAULT_EXPLODING			8
#define SND_CLASS_DEFAULT_HITTING			9
#define SND_CLASS_SP_DEFAULT_EXPLODING			10
#define SND_CLASS_MM_DEFAULT_EXPLODING			11
#define SND_BD_DIAMOND_COLLECTING			12
#define SND_BD_DIAMOND_IMPACT				13
#define SND_BD_ROCK_PUSHING				14
#define SND_BD_ROCK_IMPACT				15
#define SND_BD_MAGIC_WALL_ACTIVATING			16
#define SND_BD_MAGIC_WALL_ACTIVE			17
#define SND_BD_MAGIC_WALL_FILLING			18
#define SND_BD_AMOEBA_WAITING				19
#define SND_BD_AMOEBA_GROWING				20
#define SND_BD_AMOEBA_TURNING_TO_GEM			21
#define SND_BD_AMOEBA_TURNING_TO_ROCK			22
#define SND_BD_BUTTERFLY_MOVING				23
#define SND_BD_BUTTERFLY_WAITING			24
#define SND_BD_FIREFLY_MOVING				25
#define SND_BD_FIREFLY_WAITING				26
#define SND_SP_BASE_DIGGING				27
#define SND_SP_BUGGY_BASE_DIGGING			28
#define SND_SP_BUGGY_BASE_ACTIVE			29
#define SND_SP_INFOTRON_COLLECTING			30
#define SND_SP_INFOTRON_IMPACT				31
#define SND_SP_ZONK_PUSHING				32
#define SND_SP_ZONK_IMPACT				33
#define SND_SP_DISK_RED_COLLECTING			34
#define SND_SP_DISK_ORANGE_PUSHING			35
#define SND_SP_DISK_YELLOW_PUSHING			36
#define SND_CLASS_SP_PORT_PASSING			37
#define SND_CLASS_SP_EXIT_PASSING			38
#define SND_CLASS_SP_EXIT_OPENING			39
#define SND_CLASS_SP_EXIT_CLOSING			40
#define SND_SP_SNIKSNAK_MOVING				41
#define SND_SP_SNIKSNAK_WAITING				42
#define SND_SP_ELECTRON_MOVING				43
#define SND_SP_ELECTRON_WAITING				44
#define SND_SP_TERMINAL_ACTIVATING			45
#define SND_SP_TERMINAL_ACTIVE				46
#define SND_CLASS_SOKOBAN_PUSHING			47
#define SND_CLASS_SOKOBAN_FILLING			48
#define SND_CLASS_SOKOBAN_EMPTYING			49
#define SND_CLASS_PLAYER_MOVING				50
#define SND_SAND_DIGGING				51
#define SND_CLASS_EMERALD_COLLECTING			52
#define SND_CLASS_EMERALD_IMPACT			53
#define SND_DIAMOND_COLLECTING				54
#define SND_DIAMOND_IMPACT				55
#define SND_DIAMOND_BREAKING				56
#define SND_ROCK_PUSHING				57
#define SND_ROCK_IMPACT					58
#define SND_BOMB_PUSHING				59
#define SND_NUT_PUSHING					60
#define SND_NUT_BREAKING				61
#define SND_NUT_IMPACT					62
#define SND_CLASS_DYNAMITE_COLLECTING			63
#define SND_CLASS_DYNAMITE_DROPPING			64
#define SND_CLASS_DYNAMITE_ACTIVE			65
#define SND_CLASS_KEY_COLLECTING			66
#define SND_CLASS_GATE_PASSING				67
#define SND_BUG_MOVING					68
#define SND_BUG_WAITING					69
#define SND_SPACESHIP_MOVING				70
#define SND_SPACESHIP_WAITING				71
#define SND_YAMYAM_MOVING				72
#define SND_YAMYAM_WAITING				73
#define SND_YAMYAM_DIGGING				74
#define SND_ROBOT_MOVING				75
#define SND_ROBOT_WAITING				76
#define SND_ROBOT_WHEEL_ACTIVATING			77
#define SND_ROBOT_WHEEL_ACTIVE				78
#define SND_MAGIC_WALL_ACTIVATING			79
#define SND_MAGIC_WALL_ACTIVE				80
#define SND_MAGIC_WALL_FILLING				81
#define SND_DC_MAGIC_WALL_ACTIVATING			82
#define SND_DC_MAGIC_WALL_ACTIVE			83
#define SND_DC_MAGIC_WALL_FILLING			84
#define SND_CLASS_AMOEBA_WAITING			85
#define SND_CLASS_AMOEBA_GROWING			86
#define SND_CLASS_AMOEBA_DROPPING			87
#define SND_ACID_SPLASHING				88
#define SND_CLASS_QUICKSAND_FILLING			89
#define SND_CLASS_QUICKSAND_EMPTYING			90
#define SND_CLASS_EXIT_OPENING				91
#define SND_CLASS_EXIT_CLOSING				92
#define SND_CLASS_EXIT_PASSING				93
#define SND_CLASS_STEEL_EXIT_OPENING			94
#define SND_CLASS_STEEL_EXIT_CLOSING			95
#define SND_CLASS_STEEL_EXIT_PASSING			96
#define SND_CLASS_EM_EXIT_OPENING			97
#define SND_CLASS_EM_EXIT_CLOSING			98
#define SND_CLASS_EM_EXIT_PASSING			99
#define SND_CLASS_EM_STEEL_EXIT_OPENING			100
#define SND_CLASS_EM_STEEL_EXIT_CLOSING			101
#define SND_CLASS_EM_STEEL_EXIT_PASSING			102
#define SND_PENGUIN_PASSING				103
#define SND_BALLOON_MOVING				104
#define SND_BALLOON_WAITING				105
#define SND_BALLOON_PUSHING				106
#define SND_CLASS_BALLOON_SWITCH_ACTIVATING		107
#define SND_SPRING_MOVING				108
#define SND_SPRING_PUSHING				109
#define SND_SPRING_IMPACT				110
#define SND_CLASS_WALL_GROWING				111
#define SND_EMC_ANDROID_PUSHING				112
#define SND_EMC_ANDROID_MOVING				113
#define SND_EMC_ANDROID_DROPPING			114
#define SND_EMC_MAGIC_BALL_DROPPING			115
#define SND_PEARL_COLLECTING				116
#define SND_PEARL_BREAKING				117
#define SND_PEARL_IMPACT				118
#define SND_CRYSTAL_COLLECTING				119
#define SND_CRYSTAL_IMPACT				120
#define SND_CLASS_ENVELOPE_COLLECTING			121
#define SND_CLASS_ENVELOPE_OPENING			122
#define SND_CLASS_ENVELOPE_CLOSING			123
#define SND_INVISIBLE_SAND_DIGGING			124
#define SND_INVISIBLE_SAND_ACTIVE_DIGGING		125
#define SND_SHIELD_NORMAL_COLLECTING			126
#define SND_SHIELD_NORMAL_ACTIVE			127
#define SND_SHIELD_DEADLY_COLLECTING			128
#define SND_SHIELD_DEADLY_ACTIVE			129
#define SND_EXTRA_TIME_COLLECTING			130
#define SND_MOLE_MOVING					131
#define SND_MOLE_WAITING				132
#define SND_MOLE_DIGGING				133
#define SND_CLASS_SWITCHGATE_SWITCH_ACTIVATING		134
#define SND_CLASS_SWITCHGATE_OPENING			135
#define SND_CLASS_SWITCHGATE_CLOSING			136
#define SND_CLASS_SWITCHGATE_PASSING			137
#define SND_CLASS_TIMEGATE_SWITCH_ACTIVATING		138
#define SND_CLASS_TIMEGATE_SWITCH_ACTIVE		139
#define SND_CLASS_TIMEGATE_SWITCH_DEACTIVATING		140
#define SND_CLASS_TIMEGATE_OPENING			141
#define SND_CLASS_TIMEGATE_CLOSING			142
#define SND_CLASS_TIMEGATE_PASSING			143
#define SND_CLASS_CONVEYOR_BELT_SWITCH_ACTIVATING	144
#define SND_CLASS_CONVEYOR_BELT_ACTIVE			145
#define SND_CLASS_CONVEYOR_BELT_SWITCH_DEACTIVATING	146
#define SND_LIGHT_SWITCH_ACTIVATING			147
#define SND_LIGHT_SWITCH_DEACTIVATING			148
#define SND_DX_SUPABOMB_PUSHING				149
#define SND_TRAP_DIGGING				150
#define SND_TRAP_ACTIVATING				151
#define SND_CLASS_TUBE_WALKING				152
#define SND_AMOEBA_TURNING_TO_GEM			153
#define SND_AMOEBA_TURNING_TO_ROCK			154
#define SND_SPEED_PILL_COLLECTING			155
#define SND_DYNABOMB_INCREASE_NUMBER_COLLECTING		156
#define SND_DYNABOMB_INCREASE_SIZE_COLLECTING		157
#define SND_DYNABOMB_INCREASE_POWER_COLLECTING		158
#define SND_CLASS_DYNABOMB_DROPPING			159
#define SND_CLASS_DYNABOMB_ACTIVE			160
#define SND_SATELLITE_MOVING				161
#define SND_SATELLITE_WAITING				162
#define SND_SATELLITE_PUSHING				163
#define SND_LAMP_ACTIVATING				164
#define SND_LAMP_DEACTIVATING				165
#define SND_TIME_ORB_FULL_COLLECTING			166
#define SND_TIME_ORB_FULL_IMPACT			167
#define SND_TIME_ORB_EMPTY_PUSHING			168
#define SND_TIME_ORB_EMPTY_IMPACT			169
#define SND_GAME_OF_LIFE_WAITING			170
#define SND_GAME_OF_LIFE_GROWING			171
#define SND_BIOMAZE_WAITING				172
#define SND_BIOMAZE_GROWING				173
#define SND_PACMAN_MOVING				174
#define SND_PACMAN_WAITING				175
#define SND_PACMAN_DIGGING				176
#define SND_DARK_YAMYAM_MOVING				177
#define SND_DARK_YAMYAM_WAITING				178
#define SND_DARK_YAMYAM_DIGGING				179
#define SND_PENGUIN_MOVING				180
#define SND_PENGUIN_WAITING				181
#define SND_PIG_MOVING					182
#define SND_PIG_WAITING					183
#define SND_PIG_DIGGING					184
#define SND_DRAGON_MOVING				185
#define SND_DRAGON_WAITING				186
#define SND_DRAGON_ATTACKING				187
#define SND_CLASS_MM_MCDUFFIN_HITTING			188
#define SND_CLASS_MM_MIRROR_HITTING			189
#define SND_CLASS_MM_MIRROR_FIXED_HITTING		190
#define SND_CLASS_MM_PRISM_HITTING			191
#define SND_CLASS_MM_EXIT_HITTING			192
#define SND_CLASS_MM_EXIT_OPENING			193
#define SND_MM_EXIT_OPEN_HITTING			194
#define SND_CLASS_DF_MIRROR_HITTING			195
#define SND_CLASS_DF_MIRROR_ROTATING_HITTING		196
#define SND_CLASS_DF_REFRACTOR_HITTING			197
#define SND_CLASS_DF_RECEIVER_HITTING			198
#define SND_CLASS_DF_RECEIVER_OPENING			199
#define SND_CLASS_MM_WOODEN_WALL_HITTING		200
#define SND_CLASS_MM_WOODEN_BLOCK_HITTING		201
#define SND_CLASS_MM_WOODEN_BLOCK_PUSHING		202
#define SND_CLASS_MM_WOODEN_LOCK_HITTING		203
#define SND_CLASS_MM_WOODEN_GRID_FIXED_HITTING		204
#define SND_CLASS_MM_FUSE_HITTING			205
#define SND_CLASS_MM_ICE_WALL_HITTING			206
#define SND_CLASS_MM_ICE_WALL_SHRINKING			207
#define SND_CLASS_MM_AMOEBA_WALL_HITTING		208
#define SND_CLASS_MM_AMOEBA_WALL_GROWING		209
#define SND_CLASS_DF_WOODEN_WALL_HITTING		210
#define SND_CLASS_DF_WOODEN_GRID_FIXED_HITTING		211
#define SND_CLASS_DF_WOODEN_GRID_ROTATING_HITTING	212
#define SND_CLASS_MM_STEEL_WALL_HITTING			213
#define SND_CLASS_MM_STEEL_GRID_FIXED_HITTING		214
#define SND_CLASS_MM_STEEL_BLOCK_HITTING		215
#define SND_CLASS_MM_STEEL_BLOCK_PUSHING		216
#define SND_CLASS_MM_STEEL_LOCK_HITTING			217
#define SND_CLASS_DF_STEEL_WALL_HITTING			218
#define SND_CLASS_DF_STEEL_GRID_FIXED_HITTING		219
#define SND_CLASS_DF_STEEL_GRID_ROTATING_HITTING	220
#define SND_CLASS_MM_PACMAN_EXPLODING			221
#define SND_CLASS_MM_MCDUFFIN_EXPLODING			222
#define SND_CLASS_MM_BOMB_EXPLODING			223
#define SND_CLASS_MM_KEY_EXPLODING			224
#define SND_CLASS_MM_STEEL_LOCK_EXPLODING		225
#define SND_CLASS_MM_WOODEN_LOCK_EXPLODING		226
#define SND_GAME_STARTING				227
#define SND_GAME_LEVELTIME_CHARGING			228
#define SND_GAME_HEALTH_CHARGING			229
#define SND_GAME_RUNNING_OUT_OF_TIME			230
#define SND_GAME_LEVELTIME_BONUS			231
#define SND_GAME_HEALTH_BONUS				232
#define SND_GAME_LOSING					233
#define SND_GAME_WINNING				234
#define SND_GAME_SOKOBAN_SOLVING			235
#define SND_DOOR_OPENING				236
#define SND_DOOR_CLOSING				237
#define SND_DOOR_1_OPENING				238
#define SND_DOOR_1_CLOSING				239
#define SND_DOOR_2_OPENING				240
#define SND_DOOR_2_CLOSING				241
#define SND_REQUEST_OPENING				242
#define SND_REQUEST_CLOSING				243
#define SND_MENU_ITEM_ACTIVATING			244
#define SND_MENU_ITEM_SELECTING				245
#define SND_MENU_BUTTON_PRESSING			246
#define SND_MENU_BUTTON_RELEASING			247
#define SND_BACKGROUND_TITLE_INITIAL			248
#define SND_BACKGROUND_TITLE				249
#define SND_BACKGROUND_MAIN				250
#define SND_BACKGROUND_LEVELS				251
#define SND_BACKGROUND_LEVELNR				252
#define SND_BACKGROUND_SCORES				253
#define SND_BACKGROUND_EDITOR				254
#define SND_BACKGROUND_INFO				255
#define SND_BACKGROUND_SETUP				256
#define SND_BACKGROUND_TITLESCREEN_INITIAL_1		257
#define SND_BACKGROUND_TITLESCREEN_INITIAL_2		258
#define SND_BACKGROUND_TITLESCREEN_INITIAL_3		259
#define SND_BACKGROUND_TITLESCREEN_INITIAL_4		260
#define SND_BACKGROUND_TITLESCREEN_INITIAL_5		261
#define SND_BACKGROUND_TITLESCREEN_1			262
#define SND_BACKGROUND_TITLESCREEN_2			263
#define SND_BACKGROUND_TITLESCREEN_3			264
#define SND_BACKGROUND_TITLESCREEN_4			265
#define SND_BACKGROUND_TITLESCREEN_5			266
#define SND_BACKGROUND_TITLEMESSAGE_INITIAL_1		267
#define SND_BACKGROUND_TITLEMESSAGE_INITIAL_2		268
#define SND_BACKGROUND_TITLEMESSAGE_INITIAL_3		269
#define SND_BACKGROUND_TITLEMESSAGE_INITIAL_4		270
#define SND_BACKGROUND_TITLEMESSAGE_INITIAL_5		271
#define SND_BACKGROUND_TITLEMESSAGE_1			272
#define SND_BACKGROUND_TITLEMESSAGE_2			273
#define SND_BACKGROUND_TITLEMESSAGE_3			274
#define SND_BACKGROUND_TITLEMESSAGE_4			275
#define SND_BACKGROUND_TITLEMESSAGE_5			276

#define NUM_SOUND_FILES					277

#endif	/* CONF_SND_H */
