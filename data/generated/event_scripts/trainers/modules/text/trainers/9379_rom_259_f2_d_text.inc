	@ data/text/trainers.inc:227 Route104_Text_HaleyPostBattle
	.globl gText_Rom_259F2D
gText_Rom_259F2D: @ 0x08259F2D
	.string "どっちに しようか まよってる とき\nじぶんで きめないで たにんに まかせると\lどっちに なっても こうかいするね……"
	.byte EOS
	.if (. - gText_Rom_259F2D) > 0x3d
	.error "gText_Rom_259F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259F2D) < 0x3d
	.space 0x3d - (. - gText_Rom_259F2D)
	.endif
