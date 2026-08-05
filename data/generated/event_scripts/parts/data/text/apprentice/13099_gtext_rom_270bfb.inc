	@ data/text/apprentice.inc:565 gText_ApprenticeWhichMonFirst14
	.globl gText_Rom_270BFB
gText_Rom_270BFB: @ 0x08270BFB
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lひとつ…… そうだん させてよ\pは はずかし ながら\nポケモン 3びき きまった けどさ\lじゅんばんが きまらないんだよ\pどの ポケモンを 1ばんめに\nだせば かっこが つくの かな……?"
	.byte EOS
	.if (. - gText_Rom_270BFB) > 0x88
	.error "gText_Rom_270BFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270BFB) < 0x88
	.space 0x88 - (. - gText_Rom_270BFB)
	.endif
