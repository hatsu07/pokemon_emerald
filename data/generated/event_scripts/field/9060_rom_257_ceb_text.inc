	@ src/data/easy_chat/easy_chat_group_conditions.h:124 easy_chat_group_conditions_line_124
	.globl gText_Rom_257C35
gText_Rom_257C35: @ 0x08257C35
	.string "おくれ"
	.byte EOS
	.if (. - gText_Rom_257C35) > 0x4
	.error "gText_Rom_257C35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C35) < 0x4
	.space 0x4 - (. - gText_Rom_257C35)
	.endif
	@ field-script:0x2577B6 FieldScriptText_257C39
	.globl gText_Rom_257C39
gText_Rom_257C39: @ 0x08257C39
	.string "おお　あんたか！　よくきたな\n{0xFD}{0x02}と　{0xFD}{0x03}は　げんきじゃぞ"
	.byte EOS
	.if (. - gText_Rom_257C39) > 0x1e
	.error "gText_Rom_257C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C39) < 0x1e
	.space 0x1e - (. - gText_Rom_257C39)
	.endif
	@ field-script:0x25772B FieldScriptText_257C57
	.globl gText_Rom_257C57
gText_Rom_257C57: @ 0x08257C57
	.string "わしが　もらってしまうぞ\nほんとうは　ほしいんじゃろ？"
	.byte EOS
	.if (. - gText_Rom_257C57) > 0x1c
	.error "gText_Rom_257C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C57) < 0x1c
	.space 0x1c - (. - gText_Rom_257C57)
	.endif
	@ field-script:0x257804 FieldScriptText_257C73
	.globl gText_Rom_257C73
gText_Rom_257C73: @ 0x08257C73
	.string "わしは　そだてや　ばあさんじゃ\pおまえさんの　かわりに　ポケモンを\nそだてて　あげるよ\pなにか　そだてて　ほしいのかい？"
	.byte EOS
	.if (. - gText_Rom_257C73) > 0x3d
	.error "gText_Rom_257C73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C73) < 0x3d
	.space 0x3d - (. - gText_Rom_257C73)
	.endif
	@ field-script:0x257841 FieldScriptText_257CB0
	.globl gText_Rom_257CB0
gText_Rom_257CB0: @ 0x08257CB0
	.string "どのこを　そだてて　みるかね？"
	.byte EOS
	.if (. - gText_Rom_257CB0) > 0x10
	.error "gText_Rom_257CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257CB0) < 0x10
	.space 0x10 - (. - gText_Rom_257CB0)
	.endif
	@ field-script:0x257875 FieldScriptText_257CC0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257CC0
gText_Rom_257CC0: @ 0x08257CC0
	.string "それでは　{0xFD}{0x02}を\nしばらく　あずかるぞ\pてきとうに　じかんが\nたったら　またきなさい"
	.byte EOS
	.if (. - gText_Rom_257CC0) != 0x2b
	.error "gText_Rom_257CC0 must retain its original byte length"
	.endif
	.globl gText_Rom_257CE7
	.set gText_Rom_257CE7, gText_Rom_257CC0 + 0x27
	@ field-script:0x25789F FieldScriptText_257CEB
	.globl gText_Rom_257CEB
gText_Rom_257CEB: @ 0x08257CEB
	.string "2ひき　までなら　あずかれるけど\nもう　1ぴき　そだててみるかい？"
	.byte EOS
	.if (. - gText_Rom_257CEB) > 0x22
	.error "gText_Rom_257CEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257CEB) < 0x22
	.space 0x22 - (. - gText_Rom_257CEB)
	.endif
