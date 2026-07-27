	@ src/pokeblock.c:133 sText_StowCase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C985C
gText_Rom_5C985C: @ 0x085C985C
	.string "ケースをしまう$"
	.if (. - gText_Rom_5C985C) != 0x8
	.error "gText_Rom_5C985C must retain its original byte length"
	.endif
	.globl gText_Rom_5C9860
	.set gText_Rom_5C9860, gText_Rom_5C985C + 0x4
	.globl gUnknown_85C9864
gUnknown_85C9864: @ 0x085C9864
	.incbin "baserom.gba", 0x5c9864, 0x5
	.globl gUnknown_85C9869
gUnknown_85C9869: @ 0x085C9869

	@ src/pokeblock.c:135 sText_ThrowAwayVar1
	.globl gText_Rom_5C9869
gText_Rom_5C9869: @ 0x085C9869
	.string "{STR_VAR_1}を\nすてても よろしいですか?$"
	.if (. - gText_Rom_5C9869) > 0x12
	.error "gText_Rom_5C9869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9869) < 0x12
	.space 0x12 - (. - gText_Rom_5C9869)
	.endif
	.globl gUnknown_85C987B
gUnknown_85C987B: @ 0x085C987B

	@ src/pokeblock.c:136 sText_Var1ThrownAway
	.globl gText_Rom_5C987B
gText_Rom_5C987B: @ 0x085C987B
	.string "{STR_VAR_1}を\nすてました$"
	.if (. - gText_Rom_5C987B) > 0xa
	.error "gText_Rom_5C987B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C987B) < 0xa
	.space 0xa - (. - gText_Rom_5C987B)
	.endif
	.globl gUnknown_85C9885
gUnknown_85C9885: @ 0x085C9885

	@ src/pokeblock_feed.c:99 sText_Var1AteTheVar2
	.globl gText_Rom_5C9885
gText_Rom_5C9885: @ 0x085C9885
	.string "{STR_VAR_1}は {STR_VAR_2}を\nたべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9885) > 0xf
	.error "gText_Rom_5C9885 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9885) < 0xf
	.space 0xf - (. - gText_Rom_5C9885)
	.endif
	.globl gUnknown_85C9894
gUnknown_85C9894: @ 0x085C9894

	@ src/pokeblock_feed.c:100 sText_Var1HappilyAteVar2
	.globl gText_Rom_5C9894
gText_Rom_5C9894: @ 0x085C9894
	.string "{STR_VAR_1}は {STR_VAR_2}を\nよろこんで たべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9894) > 0x15
	.error "gText_Rom_5C9894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9894) < 0x15
	.space 0x15 - (. - gText_Rom_5C9894)
	.endif
	.globl gUnknown_85C98A9
gUnknown_85C98A9: @ 0x085C98A9

	@ src/pokeblock_feed.c:101 sText_Var1DisdainfullyAteVar2
	.globl gText_Rom_5C98A9
gText_Rom_5C98A9: @ 0x085C98A9
	.string "{STR_VAR_1}は {STR_VAR_2}を\nいやそうに たべた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C98A9) > 0x15
	.error "gText_Rom_5C98A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98A9) < 0x15
	.space 0x15 - (. - gText_Rom_5C98A9)
	.endif

	@ src/strings.c:217 gText_ShopBuy
	.globl gText_Rom_5C98BE
gText_Rom_5C98BE: @ 0x085C98BE
	.string "かいに きた$"
	.if (. - gText_Rom_5C98BE) > 0x7
	.error "gText_Rom_5C98BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98BE) < 0x7
	.space 0x7 - (. - gText_Rom_5C98BE)
	.endif

	@ src/strings.c:218 gText_ShopSell
	.globl gText_Rom_5C98C5
gText_Rom_5C98C5: @ 0x085C98C5
	.string "うりに きた$"
	.if (. - gText_Rom_5C98C5) > 0x7
	.error "gText_Rom_5C98C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98C5) < 0x7
	.space 0x7 - (. - gText_Rom_5C98C5)
	.endif

	@ src/strings.c:219 gText_ShopQuit
	.globl gText_Rom_5C98CC
gText_Rom_5C98CC: @ 0x085C98CC
	.string "なんでもないです$"
	.if (. - gText_Rom_5C98CC) > 0x9
	.error "gText_Rom_5C98CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98CC) < 0x9
	.space 0x9 - (. - gText_Rom_5C98CC)
	.endif
	.globl gUnknown_85C98D5
gUnknown_85C98D5: @ 0x085C98D5

	@ src/strings.c:222 gText_InBagVar1
	.globl gText_Rom_5C98D5
gText_Rom_5C98D5: @ 0x085C98D5
	.string "もってるかず {STR_VAR_1}コ$"
	.if (. - gText_Rom_5C98D5) > 0xb
	.error "gText_Rom_5C98D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98D5) < 0xb
	.space 0xb - (. - gText_Rom_5C98D5)
	.endif
	.globl gUnknown_85C98E0
gUnknown_85C98E0: @ 0x085C98E0

	@ src/strings.c:223 gText_QuitShopping
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C98E0
gText_Rom_5C98E0: @ 0x085C98E0
	.string "かいもの を やめます$"
	.if (. - gText_Rom_5C98E0) != 0xc
	.error "gText_Rom_5C98E0 must retain its original byte length"
	.endif
	.globl gText_Rom_5C98E7
	.set gText_Rom_5C98E7, gText_Rom_5C98E0 + 0x7
	.globl gUnknown_85C98EC
gUnknown_85C98EC: @ 0x085C98EC

	@ src/strings.c:224 gText_Var1CertainlyHowMany
	.globl gText_Rom_5C98EC
gText_Rom_5C98EC: @ 0x085C98EC
	.string "{STR_VAR_1} を\nいくつ おかいあげに なりますか?$"
	.if (. - gText_Rom_5C98EC) > 0x17
	.error "gText_Rom_5C98EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98EC) < 0x17
	.space 0x17 - (. - gText_Rom_5C98EC)
	.endif
	.globl gUnknown_85C9903
gUnknown_85C9903: @ 0x085C9903
	.incbin "baserom.gba", 0x5c9903, 0x1c
	.globl gUnknown_85C991F
gUnknown_85C991F: @ 0x085C991F

	@ src/strings.c:226 gText_Var1AndYouWantedVar2
	.globl gText_Rom_5C991F
gText_Rom_5C991F: @ 0x085C991F
	.string "{STR_VAR_1}を {STR_VAR_2}コで\n{STR_VAR_3}円 おかいあげですか?$"
	.if (. - gText_Rom_5C991F) > 0x17
	.error "gText_Rom_5C991F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C991F) < 0x17
	.space 0x17 - (. - gText_Rom_5C991F)
	.endif
	.globl gUnknown_85C9936
gUnknown_85C9936: @ 0x085C9936

	@ src/strings.c:227 gText_Var1IsItThatllBeVar2
	.globl gText_Rom_5C9936
gText_Rom_5C9936: @ 0x085C9936
	.string "{STR_VAR_1} だね!\n{STR_VAR_2}円 だけど かうかい?$"
	.if (. - gText_Rom_5C9936) > 0x15
	.error "gText_Rom_5C9936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9936) < 0x15
	.space 0x15 - (. - gText_Rom_5C9936)
	.endif
	.globl gUnknown_85C994B
gUnknown_85C994B: @ 0x085C994B

	@ src/strings.c:228 gText_YouWantedVar1ThatllBeVar2
	.globl gText_Rom_5C994B
gText_Rom_5C994B: @ 0x085C994B
	.string "{STR_VAR_1} ですね!\n{STR_VAR_2}円 だけど かいますか?$"
	.if (. - gText_Rom_5C994B) > 0x17
	.error "gText_Rom_5C994B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C994B) < 0x17
	.space 0x17 - (. - gText_Rom_5C994B)
	.endif
	.globl gUnknown_85C9962
gUnknown_85C9962: @ 0x085C9962

	@ src/strings.c:229 gText_HereYouGoThankYou
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9962
gText_Rom_5C9962: @ 0x085C9962
	.string "はい まいど!\nありがとう ございます$"
	.if (. - gText_Rom_5C9962) != 0x14
	.error "gText_Rom_5C9962 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9970
	.set gText_Rom_5C9970, gText_Rom_5C9962 + 0xe
	.globl gUnknown_85C9976
gUnknown_85C9976: @ 0x085C9976

