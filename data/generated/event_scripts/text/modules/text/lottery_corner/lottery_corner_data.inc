	@ data/text/pokedex_rating.inc:73 gBirchDexRatingText_OnANationwideBasis
	.globl gBirchDexRatingText_OnANationwideBasis
gBirchDexRatingText_OnANationwideBasis: @ 0x0826316A
	.string "ふむふむ ぜんこくてき には……\pみつけた ポケモン {STR_VAR_1}\nつかまえた ポケモン {STR_VAR_2} だね{EOS}"
	.if (. - gBirchDexRatingText_OnANationwideBasis) > 0x2f
	.error "gBirchDexRatingText_OnANationwideBasis may not grow beyond its original slot"
	.endif
	.if (. - gBirchDexRatingText_OnANationwideBasis) < 0x2f
	.space 0x2f - (. - gBirchDexRatingText_OnANationwideBasis)
	.endif
	@ data/text/lottery_corner.inc:1 LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket
	.globl LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket
LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket: @ 0x08263199
	.string "こちらは ポケモンくじ\nちゅうせん コーナーです\pとうデパートに おこし いただいた かたに\nもれなく ポケモンくじを\lひいて いただいて います!\pひいた くじの ナンバーと\nおきゃくさまの ポケモンの IDが\lあっていましたら すてきな しょうひんを\lプレゼント いたします!\pポケモンくじを ひかれますか?{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket) > 0x9d
	.error "LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket) < 0x9d
	.space 0x9d - (. - LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket)
	.endif

	@ data/text/lottery_corner.inc:13 LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow
	.globl LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow
LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow: @ 0x08263236
	.string "また あした いこう\nおこし ください{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow) > 0x14
	.error "LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow) < 0x14
	.space 0x14 - (. - LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow)
	.endif

	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A
LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A: @ 0x0826324A
	.string "それでは また おこし ください{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A) > 0x11
	.error "LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A) < 0x11
	.space 0x11 - (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_26324A)
	.endif

	@ data/text/lottery_corner.inc:20 LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
	.globl LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket: @ 0x0826325B
	.string "では くじを ひいて ください\n…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket) > 0x38
	.error "LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket) < 0x38
	.space 0x38 - (. - LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket)
	.endif

	@ data/text/lottery_corner.inc:24 LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait
LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait: @ 0x08263293
	.string "くじの ナンバーは {STR_VAR_1}です!\pナンバーが あなたの ポケモンの IDと\nいっちしているか おしらべ いたしますので\lしょうしょう おまちください{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait) != 0x4a
	.error "LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait must retain its original byte length"
	.endif

	@ data/text/lottery_corner.inc:30 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon
	.globl LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon
LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon: @ 0x082632DD
	.string "おめでとう ございます!\pあなたが つれている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon) > 0x3c
	.error "LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon) < 0x3c
	.space 0x3c - (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon)
	.endif

	@ data/text/lottery_corner.inc:36 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon
	.globl LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon
LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon: @ 0x08263319
	.string "おめでとう ございます!\pパソコンに あずけている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon) > 0x3e
	.error "LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon) < 0x3e
	.space 0x3e - (. - LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon)
	.endif

	@ data/text/lottery_corner.inc:42 LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched
	.globl LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched
LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched: @ 0x08263357
	.string "ざんねんでした\nすべて はずれの ようです{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched) > 0x16
	.error "LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched) < 0x16
	.space 0x16 - (. - LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched)
	.endif

	@ data/text/lottery_corner.inc:46 LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched
	.globl LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched
LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched: @ 0x0826336D
	.string "2ケタ あって いましたので\n3とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched) > 0x24
	.error "LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched) < 0x24
	.space 0x24 - (. - LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched)
	.endif

	@ data/text/lottery_corner.inc:51 LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched
	.globl LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched
LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched: @ 0x08263391
	.string "3ケタ あって いましたので\n2とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched) > 0x24
	.error "LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched) < 0x24
	.space 0x24 - (. - LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched)
	.endif

	@ data/text/lottery_corner.inc:56 LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched
	.globl LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched
LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched: @ 0x082633B5
	.string "4ケタ あって いましたので\n1とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched) > 0x24
	.error "LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched) < 0x24
	.space 0x24 - (. - LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched)
	.endif

	@ data/text/lottery_corner.inc:61 LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched
	.globl LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched
LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched: @ 0x082633D9
	.string "なんと 5ケタ すべて\nあって いました!!\pとくとうです!!\n{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched) > 0x2d
	.error "LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched) < 0x2d
	.space 0x2d - (. - LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched)
	.endif
	@ field-script:0x20A70C FieldScriptText_263406
	.globl FieldScriptText_263406
FieldScriptText_263406: @ 0x08263406
	.string "………あら？\nどうぐが　いっぱいの　ようですね\pどうぐを　せいりしてから　もういちど\nおこし　ください{EOS}"
	.if (. - FieldScriptText_263406) > 0x34
	.error "FieldScriptText_263406 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_263406) < 0x34
	.space 0x34 - (. - FieldScriptText_263406)
	.endif
	@ data/text/lottery_corner.inc:73 LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding
LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding: @ 0x0826343A
	.string "{PLAYER}さん ですね\nおまちして おりました!\pでは しょうひんを\nおわたし いたします{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding) != 0x2b
	.error "LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding must retain its original byte length"
	.endif

	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465
LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465: @ 0x08263465
	.string "それでは また おこし ください{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465) > 0x11
	.error "LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465 may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465) < 0x11
	.space 0x11 - (. - LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain_Copy_Rom_263465)
	.endif
