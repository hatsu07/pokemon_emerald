	@ data/text/match_call.inc:667 MatchCall_Text_Flannery_RematchReady
	.globl gText_Rom_26A3FC
gText_Rom_26A3FC: @ 0x0826A3FC
	.string "アスナ『あっ {PLAYER}さん?\nジムの じゅんびは もうできてます!\pおんせんに はいる ついでに\nフエン タウンまで きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A3FC) > 0x42
	.error "gText_Rom_26A3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A3FC) < 0x42
	.space 0x42 - (. - gText_Rom_26A3FC)
	.endif
