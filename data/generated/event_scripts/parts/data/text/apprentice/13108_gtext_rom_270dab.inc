	@ data/text/apprentice.inc:577 gText_ApprenticeWhichMon0
	.globl gText_Rom_270DAB
gText_Rom_270DAB: @ 0x08270DAB
	.string "グスン……\nあっ {PLAYER}さん!\lちょうど よかったよう\lぼく きめられない ことが あって……\pあのね ポケモンをね\nどっちを つかうか きめられないんです\p{STR_VAR_1} と {STR_VAR_2}で\nまよって いるんだけど……\l{PLAYER}さんは どっち だったら\lぼくでも かてそう って おもいますか?"
	.byte EOS
	.if (. - gText_Rom_270DAB) > 0x89
	.error "gText_Rom_270DAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270DAB) < 0x89
	.space 0x89 - (. - gText_Rom_270DAB)
	.endif
