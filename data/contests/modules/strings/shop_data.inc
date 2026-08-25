	@ src/strings.c:217 gText_ShopBuy
	.globl gText_ShopBuy
gText_ShopBuy: @ 0x085C98BE
	.string "かいに きた{EOS}"
	.if (. - gText_ShopBuy) > 0x7
	.error "gText_ShopBuy may not grow beyond its original slot"
	.endif
	.if (. - gText_ShopBuy) < 0x7
	.space 0x7 - (. - gText_ShopBuy)
	.endif

	@ src/strings.c:218 gText_ShopSell
	.globl gText_ShopSell
gText_ShopSell: @ 0x085C98C5
	.string "うりに きた{EOS}"
	.if (. - gText_ShopSell) > 0x7
	.error "gText_ShopSell may not grow beyond its original slot"
	.endif
	.if (. - gText_ShopSell) < 0x7
	.space 0x7 - (. - gText_ShopSell)
	.endif

	@ src/strings.c:219 gText_ShopQuit
	.globl gText_ShopQuit
gText_ShopQuit: @ 0x085C98CC
	.string "なんでもないです{EOS}"
	.if (. - gText_ShopQuit) > 0x9
	.error "gText_ShopQuit may not grow beyond its original slot"
	.endif
	.if (. - gText_ShopQuit) < 0x9
	.space 0x9 - (. - gText_ShopQuit)
	.endif

	@ src/strings.c:222 gText_InBagVar1
	.globl gText_InBagVar1
gText_InBagVar1: @ 0x085C98D5
	.string "もってるかず {STR_VAR_1}コ{EOS}"
	.if (. - gText_InBagVar1) > 0xb
	.error "gText_InBagVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_InBagVar1) < 0xb
	.space 0xb - (. - gText_InBagVar1)
	.endif

	@ src/strings.c:223 gText_QuitShopping
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_QuitShopping
gText_QuitShopping: @ 0x085C98E0
	.string "かいもの を やめます{EOS}"
	.if (. - gText_QuitShopping) != 0xc
	.error "gText_QuitShopping must retain its original byte length"
	.endif

	@ src/strings.c:224 gText_Var1CertainlyHowMany
	.globl gText_Var1CertainlyHowMany
gText_Var1CertainlyHowMany: @ 0x085C98EC
	.string "{STR_VAR_1} を\nいくつ おかいあげに なりますか?{EOS}"
	.if (. - gText_Var1CertainlyHowMany) > 0x17
	.error "gText_Var1CertainlyHowMany may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1CertainlyHowMany) < 0x17
	.space 0x17 - (. - gText_Var1CertainlyHowMany)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C9903: shop.s: Task_BuyMenu
	.globl gShopData_085C9903
gShopData_085C9903: @ 0x085C9903
	@ analyzed canonical ROM range 0x085C9903-0x085C991E
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1C bytes=28
	.byte 0xFD, 0x02, 0x00, 0xB3, 0xFD, 0x03, 0xB4, 0x00, 0x2D, 0xFE, 0x02, 0x08, 0x12, 0x00, 0x05, 0x06
	.byte 0x02, 0x01, 0x3A, 0x16, 0x00, 0x15, 0x28, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

	@ src/strings.c:226 gText_Var1AndYouWantedVar2
	.globl gText_Var1AndYouWantedVar2
gText_Var1AndYouWantedVar2: @ 0x085C991F
	.string "{STR_VAR_1}を {STR_VAR_2}コで\n{STR_VAR_3}円 おかいあげですか?{EOS}"
	.if (. - gText_Var1AndYouWantedVar2) > 0x17
	.error "gText_Var1AndYouWantedVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1AndYouWantedVar2) < 0x17
	.space 0x17 - (. - gText_Var1AndYouWantedVar2)
	.endif

	@ src/strings.c:227 gText_Var1IsItThatllBeVar2
	.globl gText_Var1IsItThatllBeVar2
gText_Var1IsItThatllBeVar2: @ 0x085C9936
	.string "{STR_VAR_1} だね!\n{STR_VAR_2}円 だけど かうかい?{EOS}"
	.if (. - gText_Var1IsItThatllBeVar2) > 0x15
	.error "gText_Var1IsItThatllBeVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1IsItThatllBeVar2) < 0x15
	.space 0x15 - (. - gText_Var1IsItThatllBeVar2)
	.endif

	@ src/strings.c:228 gText_YouWantedVar1ThatllBeVar2
	.globl gText_YouWantedVar1ThatllBeVar2
gText_YouWantedVar1ThatllBeVar2: @ 0x085C994B
	.string "{STR_VAR_1} ですね!\n{STR_VAR_2}円 だけど かいますか?{EOS}"
	.if (. - gText_YouWantedVar1ThatllBeVar2) > 0x17
	.error "gText_YouWantedVar1ThatllBeVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_YouWantedVar1ThatllBeVar2) < 0x17
	.space 0x17 - (. - gText_YouWantedVar1ThatllBeVar2)
	.endif

	@ src/strings.c:229 gText_HereYouGoThankYou
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_HereYouGoThankYou
gText_HereYouGoThankYou: @ 0x085C9962
	.string "はい まいど!\nありがとう ございます{EOS}"
	.if (. - gText_HereYouGoThankYou) != 0x14
	.error "gText_HereYouGoThankYou must retain its original byte length"
	.endif
