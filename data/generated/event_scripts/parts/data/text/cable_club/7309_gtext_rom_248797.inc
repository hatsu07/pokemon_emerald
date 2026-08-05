	@ data/text/cable_club.inc:274 CableClub_Text_FirstTimeRightThisWay
	.globl gText_Rom_248797
gText_Rom_248797: @ 0x08248797
	.string "こんにちは!\pワイヤレス つうしんが\nはじめての かたですね?\pわたくし あんないやくの\nアオナと もうします\pポケモンセンター 2かいの\nごあんないを いたしますので\lこちらへ どうぞ!$"
	.if (. - gText_Rom_248797) > 0x5f
	.error "gText_Rom_248797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248797) < 0x5f
	.space 0x5f - (. - gText_Rom_248797)
	.endif
