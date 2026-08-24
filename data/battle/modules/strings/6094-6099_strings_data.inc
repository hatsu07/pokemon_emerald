
	@ asm/trainer_card.s:3231 PrintPokeblocksNumOnCard
	.globl gText_Rom_5CC3CF
gText_Rom_5CC3CF: @ 0x085CC3CF
	.string "{0xFD}{0x02}{COLOR}{0x02}{SHADOW}{0x03}こ{EOS}"
	.if (. - gText_Rom_5CC3CF) > 0xa
	.error "gText_Rom_5CC3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3CF) < 0xa
	.space 0xa - (. - gText_Rom_5CC3CF)
	.endif

	@ src/strings.c:689 gText_WonContestsWFriends
	.globl gText_WonContestsWFriends
gText_WonContestsWFriends: @ 0x085CC3D9
	.string "ともだちとコンテスト ゆうしょう{EOS}"
	.if (. - gText_WonContestsWFriends) > 0x11
	.error "gText_WonContestsWFriends may not grow beyond its original slot"
	.endif
	.if (. - gText_WonContestsWFriends) < 0x11
	.space 0x11 - (. - gText_WonContestsWFriends)
	.endif

	@ src/strings.c:690 gText_BattlePtsWon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BattlePtsWon
gText_BattlePtsWon: @ 0x085CC3EA
	.string "かちとった バトルポイント{EOS}"
	.if (. - gText_BattlePtsWon) != 0xe
	.error "gText_BattlePtsWon must retain its original byte length"
	.endif

	@ src/strings.c:691 gText_NumBP
	.globl gText_NumBP
gText_NumBP: @ 0x085CC3F8
	.string "{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}BP{EOS}"
	.if (. - gText_NumBP) > 0xb
	.error "gText_NumBP may not grow beyond its original slot"
	.endif
	.if (. - gText_NumBP) < 0xb
	.space 0xb - (. - gText_NumBP)
	.endif
