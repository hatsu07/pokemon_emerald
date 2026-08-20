	@ data/text/trainers.inc:1511 Route115_Text_HectorPostBattle
	.globl gText_Rom_25D429
gText_Rom_25D429: @ 0x0825D429
	.string "こんなに めずらしい ポケモン もってるんだ\nそれだけで ぼくは まんぞく なのさ!{EOS}"
	.if (. - gText_Rom_25D429) > 0x2b
	.error "gText_Rom_25D429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D429) < 0x2b
	.space 0x2b - (. - gText_Rom_25D429)
	.endif
