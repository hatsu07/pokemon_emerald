	.globl sCenterToCornerVecTable
sCenterToCornerVecTable: @ 0x082BF299
	.incbin "baserom.gba", 0x2BF299, 0x1B

	.globl sDummySprite
sDummySprite: @ 0x082BF2B4
	.incbin "baserom.gba", 0x2BF2B4, 0x44

	.globl gDummyOamData
gDummyOamData: @ 0x082BF2F8
	.incbin "baserom.gba", 0x2BF2F8, 0xC

	.globl gDummySpriteAnimTable
gDummySpriteAnimTable: @ 0x082BF304
	.incbin "baserom.gba", 0x2BF304, 0xC

	.globl gDummySpriteAffineAnimTable
gDummySpriteAffineAnimTable: @ 0x082BF310
	.4byte 0x082BF308

	.globl gDummySpriteTemplate
gDummySpriteTemplate: @ 0x082BF314
	.4byte 0xFFFF0000
	.4byte gDummyOamData
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy

	.globl sAnimFuncs
sAnimFuncs: @ 0x082BF32C
	.4byte ContinueAnim
	.4byte BeginAnim

	.globl sAffineAnimFuncs
sAffineAnimFuncs: @ 0x082BF334
	.4byte ContinueAffineAnim
	.4byte BeginAffineAnim

	.globl sAnimCmdFuncs
sAnimCmdFuncs: @ 0x082BF33C
	.4byte AnimCmd_loop
	.4byte AnimCmd_jump
	.4byte AnimCmd_end
	.4byte AnimCmd_frame

	.globl sAffineAnimCmdFuncs
sAffineAnimCmdFuncs: @ 0x082BF34C
	.4byte AffineAnimCmd_loop
	.4byte AffineAnimCmd_jump
	.4byte AffineAnimCmd_end
	.4byte AffineAnimCmd_frame

	.globl sOamDimensions32
sOamDimensions32: @ 0x082BF35C
	.incbin "baserom.gba", 0x2BF35C, 0x60

	.globl sOamDimensions
sOamDimensions: @ 0x082BF3BC
	.incbin "baserom.gba", 0x2BF3BC, 0x70

