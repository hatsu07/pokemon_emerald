	@ data/text/pc_transfer.inc:50 gText_NicknameThisPokemon
	.globl gText_NicknameThisPokemon
gText_NicknameThisPokemon: @ 0x08243EDB
	.string "{STR_VAR_1}に\nニックネームを つけますか?{EOS}"
	.if (. - gText_NicknameThisPokemon) > 0x13
	.error "gText_NicknameThisPokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_NicknameThisPokemon) < 0x13
	.space 0x13 - (. - gText_NicknameThisPokemon)
	.endif
