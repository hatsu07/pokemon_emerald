	@ src/strings.c:435 gText_Silver
	.globl gText_Silver
gText_Silver: @ 0x085CA742
	.string "ぎん{EOS}"
	.if (. - gText_Silver) > 0x3
	.error "gText_Silver may not grow beyond its original slot"
	.endif
	.if (. - gText_Silver) < 0x3
	.space 0x3 - (. - gText_Silver)
	.endif

	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_PlaceItHere
gText_PlaceItHere: @ 0x085CA745
	.string "ここに おきますか?{EOS}"
	.if (. - gText_PlaceItHere) > 0xb
	.error "gText_PlaceItHere may not grow beyond its original slot"
	.endif
	.if (. - gText_PlaceItHere) < 0xb
	.space 0xb - (. - gText_PlaceItHere)
	.endif

	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_CantBePlacedHere
gText_CantBePlacedHere: @ 0x085CA750
	.string "ここには おけません!{EOS}"
	.if (. - gText_CantBePlacedHere) > 0xc
	.error "gText_CantBePlacedHere may not grow beyond its original slot"
	.endif
	.if (. - gText_CantBePlacedHere) < 0xc
	.space 0xc - (. - gText_CantBePlacedHere)
	.endif

	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_CancelDecorating
gText_CancelDecorating: @ 0x085CA75C
	.string "おくのを やめますか?{EOS}"
	.if (. - gText_CancelDecorating) > 0xc
	.error "gText_CancelDecorating may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelDecorating) < 0xc
	.space 0xc - (. - gText_CancelDecorating)
	.endif

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_InUseAlready
gText_InUseAlready: @ 0x085CA768
	.string "すでに おかれて います!{EOS}"
	.if (. - gText_InUseAlready) > 0xe
	.error "gText_InUseAlready may not grow beyond its original slot"
	.endif
	.if (. - gText_InUseAlready) < 0xe
	.space 0xe - (. - gText_InUseAlready)
	.endif

	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_NoMoreDecorations
gText_NoMoreDecorations: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです{EOS}"
	.if (. - gText_NoMoreDecorations) > 0x23
	.error "gText_NoMoreDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMoreDecorations) < 0x23
	.space 0x23 - (. - gText_NoMoreDecorations)
	.endif

	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_NoMoreDecorations2
gText_NoMoreDecorations2: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです{EOS}"
	.if (. - gText_NoMoreDecorations2) > 0x20
	.error "gText_NoMoreDecorations2 may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMoreDecorations2) < 0x20
	.space 0x20 - (. - gText_NoMoreDecorations2)
	.endif

	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_MustBePlacedOnDesk
gText_MustBePlacedOnDesk: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!{EOS}"
	.if (. - gText_MustBePlacedOnDesk) > 0x20
	.error "gText_MustBePlacedOnDesk may not grow beyond its original slot"
	.endif
	.if (. - gText_MustBePlacedOnDesk) < 0x20
	.space 0x20 - (. - gText_MustBePlacedOnDesk)
	.endif

	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_CantPlaceInRoom
gText_CantPlaceInRoom: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!{EOS}"
	.if (. - gText_CantPlaceInRoom) > 0x19
	.error "gText_CantPlaceInRoom may not grow beyond its original slot"
	.endif
	.if (. - gText_CantPlaceInRoom) < 0x19
	.space 0x19 - (. - gText_CantPlaceInRoom)
	.endif

	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_CantThrowAwayInUse
gText_CantThrowAwayInUse: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!{EOS}"
	.if (. - gText_CantThrowAwayInUse) > 0x20
	.error "gText_CantThrowAwayInUse may not grow beyond its original slot"
	.endif
	.if (. - gText_CantThrowAwayInUse) < 0x20
	.space 0x20 - (. - gText_CantThrowAwayInUse)
	.endif

	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_DecorationWillBeDiscarded
gText_DecorationWillBeDiscarded: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?{EOS}"
	.if (. - gText_DecorationWillBeDiscarded) > 0x17
	.error "gText_DecorationWillBeDiscarded may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationWillBeDiscarded) < 0x17
	.space 0x17 - (. - gText_DecorationWillBeDiscarded)
	.endif

	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_DecorationThrownAway
gText_DecorationThrownAway: @ 0x085CA829
	.string "グッズを すてました!{EOS}"
	.if (. - gText_DecorationThrownAway) > 0xc
	.error "gText_DecorationThrownAway may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationThrownAway) < 0xc
	.space 0xc - (. - gText_DecorationThrownAway)
	.endif

	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_StopPuttingAwayDecorations
gText_StopPuttingAwayDecorations: @ 0x085CA835
	.string "もどすのを やめますか?{EOS}"
	.if (. - gText_StopPuttingAwayDecorations) > 0xd
	.error "gText_StopPuttingAwayDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_StopPuttingAwayDecorations) < 0xd
	.space 0xd - (. - gText_StopPuttingAwayDecorations)
	.endif

	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_NoDecorationHere
gText_NoDecorationHere: @ 0x085CA842
	.string "ここに グッズは ありません!{EOS}"
	.if (. - gText_NoDecorationHere) > 0x10
	.error "gText_NoDecorationHere may not grow beyond its original slot"
	.endif
	.if (. - gText_NoDecorationHere) < 0x10
	.space 0x10 - (. - gText_NoDecorationHere)
	.endif

	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_ReturnDecorationToPC
gText_ReturnDecorationToPC: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?{EOS}"
	.if (. - gText_ReturnDecorationToPC) > 0x15
	.error "gText_ReturnDecorationToPC may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnDecorationToPC) < 0x15
	.space 0x15 - (. - gText_ReturnDecorationToPC)
	.endif

	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_DecorationReturnedToPC
gText_DecorationReturnedToPC: @ 0x085CA867
	.string "グッズを パソコンに もどしました!{EOS}"
	.if (. - gText_DecorationReturnedToPC) > 0x13
	.error "gText_DecorationReturnedToPC may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationReturnedToPC) < 0x13
	.space 0x13 - (. - gText_DecorationReturnedToPC)
	.endif
	.globl gText_Rom_5CA87A
