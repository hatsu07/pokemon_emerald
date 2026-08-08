	@ data/maps/FortreeCity_House1/scripts.inc:43 FortreeCity_House1_Text_YouWillTradeWontYou
	.globl gText_Rom_20428B
gText_Rom_20428B: @ 0x0820428B
	.string "うぉー!\nどうしても {STR_VAR_1}が ほしーっ!\l……と\lこころの さけびを きかれて しまった!\pきいた からには\nきみの {STR_VAR_1}と ボクの {STR_VAR_2}を\lもちろん こうかん するでしょ!$"
	.if (. - gText_Rom_20428B) > 0x58
	.error "gText_Rom_20428B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20428B) < 0x58
	.space 0x58 - (. - gText_Rom_20428B)
	.endif
