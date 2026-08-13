	@ src/strings.c:435 gText_Silver
	.globl gText_Rom_5CA742
gText_Rom_5CA742: @ 0x085CA742
	.string "ぎん$"
	.if (. - gText_Rom_5CA742) > 0x3
	.error "gText_Rom_5CA742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA742) < 0x3
	.space 0x3 - (. - gText_Rom_5CA742)
	.endif

	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_Rom_5CA745
gText_Rom_5CA745: @ 0x085CA745
	.string "ここに おきますか?$"
	.if (. - gText_Rom_5CA745) > 0xb
	.error "gText_Rom_5CA745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA745) < 0xb
	.space 0xb - (. - gText_Rom_5CA745)
	.endif

	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_Rom_5CA750
gText_Rom_5CA750: @ 0x085CA750
	.string "ここには おけません!$"
	.if (. - gText_Rom_5CA750) > 0xc
	.error "gText_Rom_5CA750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA750) < 0xc
	.space 0xc - (. - gText_Rom_5CA750)
	.endif

	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_Rom_5CA75C
gText_Rom_5CA75C: @ 0x085CA75C
	.string "おくのを やめますか?$"
	.if (. - gText_Rom_5CA75C) > 0xc
	.error "gText_Rom_5CA75C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA75C) < 0xc
	.space 0xc - (. - gText_Rom_5CA75C)
	.endif

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_Rom_5CA768
gText_Rom_5CA768: @ 0x085CA768
	.string "すでに おかれて います!$"
	.if (. - gText_Rom_5CA768) > 0xe
	.error "gText_Rom_5CA768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA768) < 0xe
	.space 0xe - (. - gText_Rom_5CA768)
	.endif

	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_Rom_5CA776
gText_Rom_5CA776: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA776) > 0x23
	.error "gText_Rom_5CA776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA776) < 0x23
	.space 0x23 - (. - gText_Rom_5CA776)
	.endif

	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_Rom_5CA799
gText_Rom_5CA799: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA799) > 0x20
	.error "gText_Rom_5CA799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA799) < 0x20
	.space 0x20 - (. - gText_Rom_5CA799)
	.endif

	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_Rom_5CA7B9
gText_Rom_5CA7B9: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!$"
	.if (. - gText_Rom_5CA7B9) > 0x20
	.error "gText_Rom_5CA7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7B9) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7B9)
	.endif

	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_Rom_5CA7D9
gText_Rom_5CA7D9: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!$"
	.if (. - gText_Rom_5CA7D9) > 0x19
	.error "gText_Rom_5CA7D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7D9) < 0x19
	.space 0x19 - (. - gText_Rom_5CA7D9)
	.endif

	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_Rom_5CA7F2
gText_Rom_5CA7F2: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!$"
	.if (. - gText_Rom_5CA7F2) > 0x20
	.error "gText_Rom_5CA7F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7F2) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7F2)
	.endif

	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_Rom_5CA812
gText_Rom_5CA812: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?$"
	.if (. - gText_Rom_5CA812) > 0x17
	.error "gText_Rom_5CA812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA812) < 0x17
	.space 0x17 - (. - gText_Rom_5CA812)
	.endif

	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_Rom_5CA829
gText_Rom_5CA829: @ 0x085CA829
	.string "グッズを すてました!$"
	.if (. - gText_Rom_5CA829) > 0xc
	.error "gText_Rom_5CA829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA829) < 0xc
	.space 0xc - (. - gText_Rom_5CA829)
	.endif

	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_Rom_5CA835
gText_Rom_5CA835: @ 0x085CA835
	.string "もどすのを やめますか?$"
	.if (. - gText_Rom_5CA835) > 0xd
	.error "gText_Rom_5CA835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA835) < 0xd
	.space 0xd - (. - gText_Rom_5CA835)
	.endif

	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_Rom_5CA842
gText_Rom_5CA842: @ 0x085CA842
	.string "ここに グッズは ありません!$"
	.if (. - gText_Rom_5CA842) > 0x10
	.error "gText_Rom_5CA842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA842) < 0x10
	.space 0x10 - (. - gText_Rom_5CA842)
	.endif

	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_Rom_5CA852
gText_Rom_5CA852: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?$"
	.if (. - gText_Rom_5CA852) > 0x15
	.error "gText_Rom_5CA852 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA852) < 0x15
	.space 0x15 - (. - gText_Rom_5CA852)
	.endif

	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_Rom_5CA867
gText_Rom_5CA867: @ 0x085CA867
	.string "グッズを パソコンに もどしました!$"
	.if (. - gText_Rom_5CA867) > 0x13
	.error "gText_Rom_5CA867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA867) < 0x13
	.space 0x13 - (. - gText_Rom_5CA867)
	.endif
	.globl gText_Rom_5CA87A
