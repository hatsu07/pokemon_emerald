	@ data/maps/Route104/scripts.inc:1077 Route104_Text_MayWeShouldRegister
	.globl gText_Rom_1E7E3B
gText_Rom_1E7E3B: @ 0x081E7E3B
	.string "ハルカ『あっ {PLAYER}{KUN}!\pデボンコーポレーションで ポケナビに\nエントリーコールを つけて もらったのね!\pじゃあ あたしたちも\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!$"
	.if (. - gText_Rom_1E7E3B) > 0x63
	.error "gText_Rom_1E7E3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7E3B) < 0x63
	.space 0x63 - (. - gText_Rom_1E7E3B)
	.endif
