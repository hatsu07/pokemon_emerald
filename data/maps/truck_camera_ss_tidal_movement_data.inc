	.globl sTruckCamera_HorizontalTable
sTruckCamera_HorizontalTable: @ 0x0856A47C
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 0xFF, 0xFF, 0xFF, 0
	.globl sSSTidalSailEastMovementScript
sSSTidalSailEastMovementScript: @ 0x0856A48F
	.byte 0x18, 0xFE @ MOVEMENT_ACTION_WALK_FAST_RIGHT, MOVEMENT_ACTION_STEP_END
	.globl sSSTidalSailWestMovementScript
sSSTidalSailWestMovementScript: @ 0x0856A491
	.byte 0x17, 0xFE @ MOVEMENT_ACTION_WALK_FAST_LEFT, MOVEMENT_ACTION_STEP_END
	.balign 4, 0
