	@ data/maps/RusturfTunnel/scripts.inc:448 RusturfTunnel_Text_YouShatteredBoulderTakeHM
	.globl gText_Rom_213C3E
gText_Rom_213C3E: @ 0x08213C3E
	.string "なんと! きみが この いわを\nくだいて くれたんだね\pかんしゃの しるし として\nこの ひでんマシンを うけとってくれ$"
	.if (. - gText_Rom_213C3E) > 0x3d
	.error "gText_Rom_213C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C3E) < 0x3d
	.space 0x3d - (. - gText_Rom_213C3E)
	.endif
