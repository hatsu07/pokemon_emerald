	@ data/text/secret_base_trainers.inc:103 SecretBase_Text_Trainer7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245665
gText_Rom_245665: @ 0x08245665
	.string "ああ たのしかった!\nつぎは おかいものを たのしもう かしら$"
	.if (. - gText_Rom_245665) != 0x20
	.error "gText_Rom_245665 must retain its original byte length"
	.endif
