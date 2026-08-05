	@ data/text/match_call.inc:265 MatchCall_PersonalizedText18
	.globl gText_Rom_26702B
gText_Rom_26702B: @ 0x0826702B
	.string "{STR_VAR_1}だけど……\nボクの しんきょく きいてくれ\pルル {STR_VAR_2} {STR_VAR_2}\nどうして おまえは {STR_VAR_2}なんだ\lどうして ボクは {STR_VAR_2}では ないんだ\lあー ルルル {STR_VAR_2}と{STR_VAR_1}\l{STR_VAR_1}と{STR_VAR_2} ルル……\pフェードアウト……$"
	.if (. - gText_Rom_26702B) > 0x66
	.error "gText_Rom_26702B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26702B) < 0x66
	.space 0x66 - (. - gText_Rom_26702B)
	.endif
