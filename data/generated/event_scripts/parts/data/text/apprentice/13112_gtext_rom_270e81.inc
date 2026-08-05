	@ data/text/apprentice.inc:583 gText_ApprenticeWhichMon1
	.globl gText_Rom_270E81
gText_Rom_270E81: @ 0x08270E81
	.string "あっ! {PLAYER}さんだー!\nわーい ちょうど よかった\lきょうも ボクの そうだんに のってね!\pあのね ボクね\n{STR_VAR_1}と {STR_VAR_2}の どっちを\lつかうか まよっちゃったの\pどっちを そだてようかなあ\n{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_Rom_270E81) > 0x6e
	.error "gText_Rom_270E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270E81) < 0x6e
	.space 0x6e - (. - gText_Rom_270E81)
	.endif
