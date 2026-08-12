	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5AD9C0
gText_Rom_5AD9C0: @ 0x085AD9C0
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5AD9C0) > 0x14
	.error "gText_Rom_5AD9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9C0) < 0x14
	.space 0x14 - (. - gText_Rom_5AD9C0)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AD9D4: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085AD9D4
gMoveRelearnerData_085AD9D4: @ 0x085AD9D4
	@ analyzed canonical ROM range 0x085AD9D4-0x085ADA26
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x53
	.byte 0xFD, 0x02, 0x1A, 0x00, 0x01, 0x10, 0x27, 0x0C, 0x08, 0x00, 0xFE, 0xFD, 0x03, 0x2D, 0x00, 0x05
	.byte 0x4A, 0x04, 0x10, 0x02, 0xB0, 0xAB, 0xFB, 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x02, 0x1A, 0x00, 0x2C
	.byte 0x3C, 0x2D, 0x00, 0xA5, 0x12, 0xFE, 0x05, 0x4A, 0x04, 0x13, 0x02, 0x29, 0x19, 0x44, 0x00, 0x0E
	.byte 0x02, 0x02, 0x50, 0x4B, 0x02, 0x41, 0xAB, 0xFB, 0xFD, 0x03, 0x19, 0x00, 0x06, 0x2C, 0x28, 0x16
	.byte 0x00, 0x1E, 0x06, 0x19, 0x00, 0x2C, 0x3C, 0x2D, 0xFE, 0x2C, 0x0D, 0x2A, 0x0B, 0x0E, 0x1F, 0x0D
	.byte 0x06, 0xAC, 0xFF

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADA27
gText_Rom_5ADA27: @ 0x085ADA27
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?$"
	.if (. - gText_Rom_5ADA27) != 0x1b
	.error "gText_Rom_5ADA27 must retain its original byte length"
	.endif
	.globl gText_Rom_5ADA39
	.set gText_Rom_5ADA39, gText_Rom_5ADA27 + 0x12
	@ pret/pokeemerald-jp direct xref for 0x085ADA42: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085ADA42
gMoveRelearnerData_085ADA42: @ 0x085ADA42
	@ analyzed canonical ROM range 0x085ADA42-0x085ADA44
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x3
	.byte 0xFC, 0x08, 0x20
	.globl gText_Rom_5ADA45
gText_Rom_5ADA45: @ 0x085ADA45
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5ADA45) > 0x22
	.error "gText_Rom_5ADA45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA45) < 0x22
	.space 0x22 - (. - gText_Rom_5ADA45)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ADA67: move_relearner.s: DoMoveRelearnerMain
	.globl gMoveRelearnerData_085ADA67
gMoveRelearnerData_085ADA67: @ 0x085ADA67
	@ analyzed canonical ROM range 0x085ADA67-0x085ADA86
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x02FD, 0x001A, 0x04FD, 0x0019, 0x0612, 0x0602, 0x2D10, 0x07FE
	.2byte 0x022A, 0x0016, 0x0D2C, 0x102A, 0xFBAB, 0x0C0F, 0xB013, 0xFBAB
	.globl gText_Rom_5ADA87
gText_Rom_5ADA87: @ 0x085ADA87
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5ADA87) > 0x14
	.error "gText_Rom_5ADA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA87) < 0x14
	.space 0x14 - (. - gText_Rom_5ADA87)
	.endif
	@ Decoded text from ROM range: offset=0x5ADA9B, size=0x14
	.string "{STR_VAR_1}は　{STR_VAR_2}を　おぼえずに　おわった！$"
