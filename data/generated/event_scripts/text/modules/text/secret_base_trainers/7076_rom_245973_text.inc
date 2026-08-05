	@ data/text/secret_base_trainers.inc:163 SecretBase_Text_Trainer9Intro
	.globl gText_Rom_245973
gText_Rom_245973: @ 0x08245973
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!\pしょうぶの センスも ためして みる?$"
	.if (. - gText_Rom_245973) > 0x70
	.error "gText_Rom_245973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245973) < 0x70
	.space 0x70 - (. - gText_Rom_245973)
	.endif
