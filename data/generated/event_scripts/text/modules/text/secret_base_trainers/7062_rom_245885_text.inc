	@ data/text/secret_base_trainers.inc:145 SecretBase_Text_Trainer4Intro
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245885
gText_Rom_245885: @ 0x08245885
	.string "すきな ばしょを さがして\nすきな グッズを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pそんな ぼくと しょうぶ しよう!$"
	.if (. - gText_Rom_245885) != 0x4c
	.error "gText_Rom_245885 must retain its original byte length"
	.endif
