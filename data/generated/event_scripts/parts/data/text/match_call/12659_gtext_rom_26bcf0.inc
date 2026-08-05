	@ data/text/match_call.inc:862 MatchCall_Text_Norman1
	.globl gText_Rom_26BCF0
gText_Rom_26BCF0: @ 0x0826BCF0
	.string "パパ『カナズミの まちには\nいあいぎりおやじ という\lかわった なまえの ひとが すんでいる!\pちかくまで いったら\nおまえも たずねて みると いいぞ!"
	.byte EOS
	.if (. - gText_Rom_26BCF0) > 0x4e
	.error "gText_Rom_26BCF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCF0) < 0x4e
	.space 0x4e - (. - gText_Rom_26BCF0)
	.endif
