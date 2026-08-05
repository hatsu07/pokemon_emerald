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
