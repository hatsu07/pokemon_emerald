	@ field-script:0x21ECBF FieldScriptText_21EF10
	.globl gText_Rom_21EF10
gText_Rom_21EF10: @ 0x0821EF10
	.string "ここは　バトルタワー　さ！\pトレーナーは　きたえあげた　ポケモンで\nひたすら　かちぬいて　いくのさ！"
	.byte EOS
	.if (. - gText_Rom_21EF10) > 0x33
	.error "gText_Rom_21EF10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EF10) < 0x33
	.space 0x33 - (. - gText_Rom_21EF10)
	.endif
