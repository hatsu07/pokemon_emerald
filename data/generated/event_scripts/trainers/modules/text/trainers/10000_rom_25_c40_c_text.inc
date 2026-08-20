	@ data/text/trainers.inc:1118 Route112_Text_TrentRematchPostBattle
	.globl gText_Rom_25C40C
gText_Rom_25C40C: @ 0x0825C40C
	.string "えんとつやまの うえには\nすごい トレーナーが いるらしいぞ!\lこんど しょうぶに いくつもりだ!{EOS}"
	.if (. - gText_Rom_25C40C) > 0x32
	.error "gText_Rom_25C40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C40C) < 0x32
	.space 0x32 - (. - gText_Rom_25C40C)
	.endif
