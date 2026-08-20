	@ field-script:0x1F683F FieldScriptText_22AD4C
	.globl gText_Rom_22AD4C
gText_Rom_22AD4C: @ 0x0822AD4C
	.string "あいてに　むかって　じぶんから\nちょくせつ　ダメージを　あたえる\lこうげきの　わざ\pたたかいの　じゅんびや　キズついた　からだの\nかいふくを　する　ぼうぎょの　わざ\pあいての　のうりょくを　さげたり\nどくや　まひに　したり　などの\lすこし　かわった　ことを　する　わざ\pポケモンは　すべての　わざを\nおおきく　3つの　しゅるいに　わけて\lどんな　わざを　だすか　かんがえて　います{EOS}"
	.if (. - gText_Rom_22AD4C) > 0xbf
	.error "gText_Rom_22AD4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AD4C) < 0xbf
	.space 0xbf - (. - gText_Rom_22AD4C)
	.endif
