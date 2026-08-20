	@ data/text/trainers.inc:440 Route107_Text_TonyPostBattle
	.globl gText_Rom_25A86A
gText_Rom_25A86A: @ 0x0825A86A
	.string "おおきな ユメを いっぱい つめてー\nでっかい うみを ひとおよぎー\pさぁて まだまだ およぐぞー!{EOS}"
	.if (. - gText_Rom_25A86A) > 0x33
	.error "gText_Rom_25A86A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A86A) < 0x33
	.space 0x33 - (. - gText_Rom_25A86A)
	.endif
