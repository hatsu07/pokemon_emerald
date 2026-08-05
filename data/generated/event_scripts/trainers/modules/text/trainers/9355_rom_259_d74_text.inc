	@ data/text/trainers.inc:190 Route104_Text_MiaIntro (+1 aliases)
	.globl gText_Rom_259D74
gText_Rom_259D74: @ 0x08259D74
	.string "ミオ『あたしたち ふたご だから\nポケモンしょうぶも いっしょに するです!"
	.byte EOS
	.if (. - gText_Rom_259D74) > 0x27
	.error "gText_Rom_259D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259D74) < 0x27
	.space 0x27 - (. - gText_Rom_259D74)
	.endif
