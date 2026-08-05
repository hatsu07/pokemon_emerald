	@ data/text/cable_club.inc:203 MossdeepCity_GameCorner_1F_Text_WelcomeCanYouWait
	.globl gText_Rom_248330
gText_Rom_248330: @ 0x08248330
	.string "やあ いらっしゃい\nワイヤレスつうしんの ゲームかな?\lちょっと まってね$"
	.if (. - gText_Rom_248330) > 0x26
	.error "gText_Rom_248330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248330) < 0x26
	.space 0x26 - (. - gText_Rom_248330)
	.endif
