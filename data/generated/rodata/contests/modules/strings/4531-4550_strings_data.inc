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
	@ pret/pokeemerald-jp direct xref for 0x085C9903: shop.s: Task_BuyMenu
	.globl gShopData_085C9903
gShopData_085C9903: @ 0x085C9903
	@ analyzed canonical ROM range 0x085C9903-0x085C991E
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.byte 0xFD, 0x02, 0x00, 0xB3, 0xFD, 0x03, 0xB4, 0x00, 0x2D, 0xFE, 0x02, 0x08, 0x12, 0x00, 0x05, 0x06
	.byte 0x02, 0x01, 0x3A, 0x16, 0x00, 0x15, 0x28, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

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

	@ src/strings.c:229 gText_HereYouGoThankYou
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9962
gText_Rom_5C9962: @ 0x085C9962
	.string "はい まいど!\nありがとう ございます$"
	.if (. - gText_Rom_5C9962) != 0x14
	.error "gText_Rom_5C9962 must retain its original byte length"
	.endif
