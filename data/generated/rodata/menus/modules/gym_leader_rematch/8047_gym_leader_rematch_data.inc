gGymLeaderRematches_AfterNewMauville: @ 0x085FC01C
	.2byte GYM_REMATCH_ROXANNE
	.2byte GYM_REMATCH_BRAWLY
	.2byte GYM_REMATCH_WATTSON
	.2byte GYM_REMATCH_FLANNERY
	.2byte GYM_REMATCH_NORMAN
	.2byte GYM_REMATCH_WINONA
	.2byte GYM_REMATCH_TATE_AND_LIZA
	.2byte GYM_REMATCH_JUAN

	.globl gGymLeaderRematches_BeforeNewMauville
gGymLeaderRematches_BeforeNewMauville: @ 0x085FC02C
	.2byte GYM_REMATCH_ROXANNE
	.2byte GYM_REMATCH_BRAWLY
	.2byte GYM_REMATCH_FLANNERY
	.2byte GYM_REMATCH_NORMAN
	.2byte GYM_REMATCH_WINONA
	.2byte GYM_REMATCH_TATE_AND_LIZA
	.2byte GYM_REMATCH_JUAN
	.2byte 0 @ alignment
	@ Priority B: Battle Frontier logo-circles transition module.
	.globl gBattleTransitionFrontierLogoCenter_Gfx
