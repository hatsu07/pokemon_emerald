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
	.globl gText_Rom_263199
gText_Rom_263199: @ 0x08263199
	.string "こちらは ポケモンくじ\nちゅうせん コーナーです\pとうデパートに おこし いただいた かたに\nもれなく ポケモンくじを\lひいて いただいて います!\pひいた くじの ナンバーと\nおきゃくさまの ポケモンの IDが\lあっていましたら すてきな しょうひんを\lプレゼント いたします!\pポケモンくじを ひかれますか?{EOS}"
	.if (. - gText_Rom_263199) > 0x9d
	.error "gText_Rom_263199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263199) < 0x9d
	.space 0x9d - (. - gText_Rom_263199)
	.endif

	@ data/text/lottery_corner.inc:13 LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow
	.globl gText_Rom_263236
gText_Rom_263236: @ 0x08263236
	.string "また あした いこう\nおこし ください{EOS}"
	.if (. - gText_Rom_263236) > 0x14
	.error "gText_Rom_263236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263236) < 0x14
	.space 0x14 - (. - gText_Rom_263236)
	.endif

	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl gText_Rom_26324A
gText_Rom_26324A: @ 0x0826324A
	.string "それでは また おこし ください{EOS}"
	.if (. - gText_Rom_26324A) > 0x11
	.error "gText_Rom_26324A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26324A) < 0x11
	.space 0x11 - (. - gText_Rom_26324A)
	.endif

	@ data/text/lottery_corner.inc:20 LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
	.globl gText_Rom_26325B
gText_Rom_26325B: @ 0x0826325B
	.string "では くじを ひいて ください\n…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}{EOS}"
	.if (. - gText_Rom_26325B) > 0x38
	.error "gText_Rom_26325B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26325B) < 0x38
	.space 0x38 - (. - gText_Rom_26325B)
	.endif

	@ data/text/lottery_corner.inc:24 LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_263293
gText_Rom_263293: @ 0x08263293
	.string "くじの ナンバーは {STR_VAR_1}です!\pナンバーが あなたの ポケモンの IDと\nいっちしているか おしらべ いたしますので\lしょうしょう おまちください{EOS}"
	.if (. - gText_Rom_263293) != 0x4a
	.error "gText_Rom_263293 must retain its original byte length"
	.endif
	.globl gText_Rom_2632CE
	.set gText_Rom_2632CE, gText_Rom_263293 + 0x3b

	@ data/text/lottery_corner.inc:30 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon
	.globl gText_Rom_2632DD
gText_Rom_2632DD: @ 0x082632DD
	.string "おめでとう ございます!\pあなたが つれている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!{EOS}"
	.if (. - gText_Rom_2632DD) > 0x3c
	.error "gText_Rom_2632DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2632DD) < 0x3c
	.space 0x3c - (. - gText_Rom_2632DD)
	.endif

	@ data/text/lottery_corner.inc:36 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon
	.globl gText_Rom_263319
gText_Rom_263319: @ 0x08263319
	.string "おめでとう ございます!\pパソコンに あずけている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!{EOS}"
	.if (. - gText_Rom_263319) > 0x3e
	.error "gText_Rom_263319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263319) < 0x3e
	.space 0x3e - (. - gText_Rom_263319)
	.endif

	@ data/text/lottery_corner.inc:42 LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched
	.globl gText_Rom_263357
gText_Rom_263357: @ 0x08263357
	.string "ざんねんでした\nすべて はずれの ようです{EOS}"
	.if (. - gText_Rom_263357) > 0x16
	.error "gText_Rom_263357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263357) < 0x16
	.space 0x16 - (. - gText_Rom_263357)
	.endif

	@ data/text/lottery_corner.inc:46 LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched
	.globl gText_Rom_26336D
gText_Rom_26336D: @ 0x0826336D
	.string "2ケタ あって いましたので\n3とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - gText_Rom_26336D) > 0x24
	.error "gText_Rom_26336D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26336D) < 0x24
	.space 0x24 - (. - gText_Rom_26336D)
	.endif

	@ data/text/lottery_corner.inc:51 LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched
	.globl gText_Rom_263391
gText_Rom_263391: @ 0x08263391
	.string "3ケタ あって いましたので\n2とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - gText_Rom_263391) > 0x24
	.error "gText_Rom_263391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263391) < 0x24
	.space 0x24 - (. - gText_Rom_263391)
	.endif

	@ data/text/lottery_corner.inc:56 LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched
	.globl gText_Rom_2633B5
gText_Rom_2633B5: @ 0x082633B5
	.string "4ケタ あって いましたので\n1とう です!\l{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - gText_Rom_2633B5) > 0x24
	.error "gText_Rom_2633B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2633B5) < 0x24
	.space 0x24 - (. - gText_Rom_2633B5)
	.endif

	@ data/text/lottery_corner.inc:61 LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched
	.globl gText_Rom_2633D9
gText_Rom_2633D9: @ 0x082633D9
	.string "なんと 5ケタ すべて\nあって いました!!\pとくとうです!!\n{STR_VAR_1}を さしあげます!!{EOS}"
	.if (. - gText_Rom_2633D9) > 0x2d
	.error "gText_Rom_2633D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2633D9) < 0x2d
	.space 0x2d - (. - gText_Rom_2633D9)
	.endif
