	@ data/text/match_call.inc:373 MatchCall_PersonalizedText54
	.globl gText_Rom_268294
gText_Rom_268294: @ 0x08268294
	.string "いつも ぼうけんの じゅんびを\nおこたらない {STR_VAR_1}よ!\p{PLAYER}{KUN} どうぐは たりてる?\nポケモンの たいちょうは バッチリ?\pじぶんの みの まわりを\nつねに かんぺきに しておくことが\lたびを ながく つづける ひけつ よ!\pわたしも じぶんの どうぐを\nかくにん するわ! またね!$"
	.if (. - gText_Rom_268294) > 0x90
	.error "gText_Rom_268294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268294) < 0x90
	.space 0x90 - (. - gText_Rom_268294)
	.endif
