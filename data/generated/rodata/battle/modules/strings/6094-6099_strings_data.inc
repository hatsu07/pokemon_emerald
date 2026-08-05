	@ src/strings.c:689 gText_WonContestsWFriends
	.globl gText_Rom_5CC3D9
gText_Rom_5CC3D9: @ 0x085CC3D9
	.string "ともだちとコンテスト ゆうしょう$"
	.if (. - gText_Rom_5CC3D9) > 0x11
	.error "gText_Rom_5CC3D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3D9) < 0x11
	.space 0x11 - (. - gText_Rom_5CC3D9)
	.endif
	.globl gUnknown_85CC3EA
gUnknown_85CC3EA: @ 0x085CC3EA

	@ src/strings.c:690 gText_BattlePtsWon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC3EA
gText_Rom_5CC3EA: @ 0x085CC3EA
	.string "かちとった バトルポイント$"
	.if (. - gText_Rom_5CC3EA) != 0xe
	.error "gText_Rom_5CC3EA must retain its original byte length"
	.endif
	.globl gText_Rom_5CC3F0
	.set gText_Rom_5CC3F0, gText_Rom_5CC3EA + 0x6
	.globl gText_Rom_5CC3F3
	.set gText_Rom_5CC3F3, gText_Rom_5CC3EA + 0x9
	.globl gUnknown_85CC3F8
gUnknown_85CC3F8: @ 0x085CC3F8

	@ src/strings.c:691 gText_NumBP
	.globl gText_Rom_5CC3F8
gText_Rom_5CC3F8: @ 0x085CC3F8
	.string "{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}BP$"
	.if (. - gText_Rom_5CC3F8) > 0xb
	.error "gText_Rom_5CC3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3F8) < 0xb
	.space 0xb - (. - gText_Rom_5CC3F8)
	.endif
