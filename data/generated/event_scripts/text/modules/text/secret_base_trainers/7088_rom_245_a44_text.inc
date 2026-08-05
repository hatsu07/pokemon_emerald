	@ data/text/secret_base_trainers.inc:178 SecretBase_Text_Trainer9PreChampion
	.globl gText_Rom_245A44
gText_Rom_245A44: @ 0x08245A44
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!$"
	.if (. - gText_Rom_245A44) > 0x5c
	.error "gText_Rom_245A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A44) < 0x5c
	.space 0x5c - (. - gText_Rom_245A44)
	.endif
