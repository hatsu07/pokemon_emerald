	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:81 RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase
	.globl gText_Rom_2038E4
gText_Rom_2038E4: @ 0x082038E4
	.string "やあ いらっしゃい\nハコガミけ へ ようこそ!\pちょっと しつもんが あるんだけど\nきみ こもり したこと ある?\pおじさん はじめて\nいくじ してるんだけどさ\pうちの アヤノ\nなかなか わらって くれないんだよね\pおもしろーい ことば で\nわらって くれないかなーって\lおもうんだけど\lおもしろーい ことば おしえて くれない?$"
	.if (. - gText_Rom_2038E4) > 0xa6
	.error "gText_Rom_2038E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2038E4) < 0xa6
	.space 0xa6 - (. - gText_Rom_2038E4)
	.endif
