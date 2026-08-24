	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6CD
gText_Rom_5CA6CD: @ 0x085CA6CD
	.string "えらんだ　グッズを　へやに　おきます！{EOS}"
	.if (. - gText_Rom_5CA6CD) > 0x14
	.error "gText_Rom_5CA6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6CD) < 0x14
	.space 0x14 - (. - gText_Rom_5CA6CD)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6E1
gText_Rom_5CA6E1: @ 0x085CA6E1
	.string "えらんだ　グッズを　パソコンに　もどします！{EOS}"
	.if (. - gText_Rom_5CA6E1) > 0x17
	.error "gText_Rom_5CA6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6E1) < 0x17
	.space 0x17 - (. - gText_Rom_5CA6E1)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6F8
gText_Rom_5CA6F8: @ 0x085CA6F8
	.string "いらなくなった　グッズを　すてます！{EOS}"
	.if (. - gText_Rom_5CA6F8) > 0x13
	.error "gText_Rom_5CA6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6F8) < 0x13
	.space 0x13 - (. - gText_Rom_5CA6F8)
	.endif

	@ src/strings.c:425 gText_NoDecorations
	.globl gText_NoDecorations
gText_NoDecorations: @ 0x085CA70B
	.string "グッズは ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoDecorations) > 0xe
	.error "gText_NoDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_NoDecorations) < 0xe
	.space 0xe - (. - gText_NoDecorations)
	.endif
	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA719
gText_Rom_5CA719: @ 0x085CA719
	.string "つくえ{EOS}"
	.if (. - gText_Rom_5CA719) > 0x4
	.error "gText_Rom_5CA719 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA719) < 0x4
	.space 0x4 - (. - gText_Rom_5CA719)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA71D
gText_Rom_5CA71D: @ 0x085CA71D
	.string "いす{EOS}"
	.if (. - gText_Rom_5CA71D) > 0x3
	.error "gText_Rom_5CA71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA71D) < 0x3
	.space 0x3 - (. - gText_Rom_5CA71D)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA720
gText_Rom_5CA720: @ 0x085CA720
	.string "はちうえ{EOS}"
	.if (. - gText_Rom_5CA720) > 0x5
	.error "gText_Rom_5CA720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA720) < 0x5
	.space 0x5 - (. - gText_Rom_5CA720)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA725
gText_Rom_5CA725: @ 0x085CA725
	.string "おきもの{EOS}"
	.if (. - gText_Rom_5CA725) > 0x5
	.error "gText_Rom_5CA725 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA725) < 0x5
	.space 0x5 - (. - gText_Rom_5CA725)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72A
gText_Rom_5CA72A: @ 0x085CA72A
	.string "マット{EOS}"
	.if (. - gText_Rom_5CA72A) > 0x4
	.error "gText_Rom_5CA72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CA72A)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72E
gText_Rom_5CA72E: @ 0x085CA72E
	.string "ポスター{EOS}"
	.if (. - gText_Rom_5CA72E) > 0x5
	.error "gText_Rom_5CA72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA72E)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+2 aliases)
	.globl gText_Rom_5CA733
gText_Rom_5CA733: @ 0x085CA733
	.string "ぬいぐるみ{EOS}"
	.if (. - gText_Rom_5CA733) > 0x6
	.error "gText_Rom_5CA733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA733) < 0x6
	.space 0x6 - (. - gText_Rom_5CA733)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA739
gText_Rom_5CA739: @ 0x085CA739
	.string "クッション{EOS}"
	.if (. - gText_Rom_5CA739) > 0x6
	.error "gText_Rom_5CA739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA739) < 0x6
	.space 0x6 - (. - gText_Rom_5CA739)
	.endif
