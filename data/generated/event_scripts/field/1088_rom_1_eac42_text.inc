	@ field-script:0x1EA628 FieldScriptText_1EAC42
	.globl gText_Rom_1EAC42
gText_Rom_1EAC42: @ 0x081EAC42
	.string "おとくな　けいじばん！！\pポケモンの　つよさを　あらわす　ことばで\nとくこう　とは\lとくしゅ　こうげきりょく　のこと！\pとくぼう　とは\nとくしゅ　ぼうぎょりょく　のこと　です！{EOS}"
	.if (. - gText_Rom_1EAC42) > 0x59
	.error "gText_Rom_1EAC42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC42) < 0x59
	.space 0x59 - (. - gText_Rom_1EAC42)
	.endif
