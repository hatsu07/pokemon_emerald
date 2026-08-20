	@ field-script:0x21EB7F FieldScriptText_262BD6
	.globl gText_Rom_262BD6
gText_Rom_262BD6: @ 0x08262BD6
	.string "このへんに　いる　ポケモンは\nホウエンちほう　いがいの　とちに\lすんでる　ポケモン　らしいぜ{EOS}"
	.if (. - gText_Rom_262BD6) > 0x2f
	.error "gText_Rom_262BD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262BD6) < 0x2f
	.space 0x2f - (. - gText_Rom_262BD6)
	.endif
