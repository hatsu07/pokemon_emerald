	@ data/maps/Route104/scripts.inc:1124 Route104_Text_BrendanWeShouldRegister
	.globl gText_Rom_1E8001
gText_Rom_1E8001: @ 0x081E8001
	.string "ユウキ『おっ {PLAYER}!\pデボンコーポレーションで ポケナビに\nエントリーコールを つけて もらったな!\pじゃあ オレたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!{EOS}"
	.if (. - gText_Rom_1E8001) > 0x5e
	.error "gText_Rom_1E8001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8001) < 0x5e
	.space 0x5e - (. - gText_Rom_1E8001)
	.endif
