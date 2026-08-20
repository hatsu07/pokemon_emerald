	@ data/maps/RustboroCity/scripts.inc:1026 RustboroCity_Text_HaveYouChallengedGym
	.globl gText_Rom_1DF2F2
gText_Rom_1DF2F2: @ 0x081DF2F2
	.string "ポケモンジムに ちょうせん したかい?\pあの キラリと かがやく\nジムバッジを もつと トレーナーとしての\lじかくが めばえて くるんだな!{EOS}"
	.if (. - gText_Rom_1DF2F2) > 0x47
	.error "gText_Rom_1DF2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF2F2) < 0x47
	.space 0x47 - (. - gText_Rom_1DF2F2)
	.endif
