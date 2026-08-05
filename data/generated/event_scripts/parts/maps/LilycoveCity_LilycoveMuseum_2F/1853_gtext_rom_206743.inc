	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:248 LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit
	.globl gText_Rom_206743
gText_Rom_206743: @ 0x08206743
	.string "やあ これは {PLAYER}さん!\pおいそがしい たびの あいまに\nおたちより くださって こうえいです!\pどうぞ ごゆっくり おすごしくださいね$"
	.if (. - gText_Rom_206743) > 0x45
	.error "gText_Rom_206743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206743) < 0x45
	.space 0x45 - (. - gText_Rom_206743)
	.endif
