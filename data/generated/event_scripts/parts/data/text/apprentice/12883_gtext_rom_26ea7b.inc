	@ data/text/apprentice.inc:241 gText_ApprenticeWhatHeldItem0
	.globl gText_Rom_26EA7B
gText_Rom_26EA7B: @ 0x0826EA7B
	.string "はあ…… シクシク\nああっ {PLAYER}さん!\pぼくね きめられない ことが あって\nちょっと こまってたんです\pきめられない のは {STR_VAR_1}に\nなにを もたせるかって ことなんです\lおしえて ください {PLAYER}さん\lなにか もたせた ほうが いいですか?"
	.byte EOS
	.if (. - gText_Rom_26EA7B) > 0x79
	.error "gText_Rom_26EA7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA7B) < 0x79
	.space 0x79 - (. - gText_Rom_26EA7B)
	.endif
