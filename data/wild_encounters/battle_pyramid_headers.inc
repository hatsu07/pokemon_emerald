@ Battle Pyramid wild encounter headers
@ ROM 0x0852E540-0x0852E5DF
@
@ StandardWildEncounter indexes these 7 entries by
@ frontier.curChallengeBattleNum (0-6). Only landMonsInfo is used here;
@ mapGroup/mapNum retain the original ROM values for exact matching.

gBattlePyramidWildMonHeaders::
	wildmonheader 0, 1, gBattlePyramidWildMonsInfo_1, 0, 0, 0
	wildmonheader 0, 2, gBattlePyramidWildMonsInfo_2, 0, 0, 0
	wildmonheader 0, 3, gBattlePyramidWildMonsInfo_3, 0, 0, 0
	wildmonheader 0, 4, gBattlePyramidWildMonsInfo_4, 0, 0, 0
	wildmonheader 0, 5, gBattlePyramidWildMonsInfo_5, 0, 0, 0
	wildmonheader 0, 6, gBattlePyramidWildMonsInfo_6, 0, 0, 0
	wildmonheader 0, 7, gBattlePyramidWildMonsInfo_7, 0, 0, 0
	wildmonheader 0xFF, 0xFF, 0, 0, 0, 0
