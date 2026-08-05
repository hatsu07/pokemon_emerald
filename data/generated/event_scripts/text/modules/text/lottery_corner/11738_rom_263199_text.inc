	@ data/text/lottery_corner.inc:1 LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket
	.globl gText_Rom_263199
gText_Rom_263199: @ 0x08263199
	.string "こちらは ポケモンくじ\nちゅうせん コーナーです\pとうデパートに おこし いただいた かたに\nもれなく ポケモンくじを\lひいて いただいて います!\pひいた くじの ナンバーと\nおきゃくさまの ポケモンの IDが\lあっていましたら すてきな しょうひんを\lプレゼント いたします!\pポケモンくじを ひかれますか?$"
	.if (. - gText_Rom_263199) > 0x9d
	.error "gText_Rom_263199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263199) < 0x9d
	.space 0x9d - (. - gText_Rom_263199)
	.endif
