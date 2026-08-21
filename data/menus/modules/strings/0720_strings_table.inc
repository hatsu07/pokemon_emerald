	.4byte GetTrainerApproachDistanceSouth
	.4byte GetTrainerApproachDistanceNorth
	.4byte GetTrainerApproachDistanceWest
	.4byte GetTrainerApproachDistanceEast
	.4byte sub_080B38D0
	.4byte TrainerExclamationMark
	.4byte WaitTrainerExclamationMark
	.4byte TrainerMoveToPlayer
	.4byte PlayerFaceApproachingTrainer
	.4byte WaitPlayerFaceApproachingTrainer
	.4byte RevealDisguisedTrainer
	.4byte WaitRevealDisguisedTrainer
	.4byte RevealHiddenTrainer
	.4byte PopOutOfAshHiddenTrainer
	.4byte JumpInPlaceHiddenTrainer
	.4byte WaitRevealHiddenTrainer
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_0852B418:
	@ ANALYSIS: SOURCE_RANGE offset=0x52B418, size=0x48
	@ semantic recovery: rodata; byte-verified against linked ROM

	@ proven function-pointer table
	.4byte RevealHiddenTrainer
	.4byte PopOutOfAshHiddenTrainer
	.4byte JumpInPlaceHiddenTrainer
	.4byte WaitRevealHiddenTrainer
	.byte 0x00, 0x00, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00, 0x58, 0xB2, 0x52, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0xD8, 0xB2, 0x52, 0x08, 0x80, 0x00, 0x00, 0x00, 0x58, 0xB3, 0x52, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x3C, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x3C, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x48, 0xB4, 0x52, 0x08, 0x50, 0xB4, 0x52, 0x08
	@ ANALYSIS: SOURCE_RANGE offset=0x52B460, size=0x18
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: U8_DATA size=0x10 bytes=16
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x28, 0xB4, 0x52, 0x08, 0x58, 0xB4, 0x52, 0x08, 0x30, 0xB4, 0x52, 0x08
	.4byte gDummySpriteAffineAnimTable @ ROM pointer 0x082BF310
	.4byte SpriteCB_TrainerIcons @ ROM pointer 0x080B3E7D

	@ ANALYSIS: SOURCE_RANGE offset=0x52B478, size=0x18
	@ semanticized-mass: resolved embedded ROM pointers
	@ ANALYSIS: U8_DATA size=0x10 bytes=16
	.byte 0xFF, 0xFF, 0x04, 0x10, 0x28, 0xB4, 0x52, 0x08, 0x58, 0xB4, 0x52, 0x08, 0x40, 0xB4, 0x52, 0x08
	.4byte gDummySpriteAffineAnimTable @ ROM pointer 0x082BF310
	.4byte SpriteCB_TrainerIcons @ ROM pointer 0x080B3E7D
