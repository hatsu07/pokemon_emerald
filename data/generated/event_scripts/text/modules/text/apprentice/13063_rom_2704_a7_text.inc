	@ data/text/apprentice.inc:511 gText_ApprenticeWhichMonFirst5
	.globl gText_Rom_2704A7
gText_Rom_2704A7: @ 0x082704A7
	.string "ハイ! オレの せんせい\n{PLAYER}{KUN}!\pきょうも いそがしいんだ オレ\nサイクリングに ショッピングに ハミング!\pしょうぶに つかう ポケモンの\nじゅんばんさえ きめられなくてねー\pあのさ!\nちょっと オレの ポケモン みてよ!\lで どいつが はじめに でれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_2704A7) > 0x89
	.error "gText_Rom_2704A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2704A7) < 0x89
	.space 0x89 - (. - gText_Rom_2704A7)
	.endif
