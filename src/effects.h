// Copyright 2023 The Forgotten Server Authors. All rights reserved.
// Use of this source code is governed by the GPL-2.0 License that can be found in the LICENSE file.

#ifndef FS_EFFECTS_H
#define FS_EFFECTS_H

struct Effect
{
	Effect(uint16_t id, std::string_view name, int32_t speed, bool premium) :
	    name{name}, speed{speed}, id{id}, premium{premium}
	{}

	std::string name;
	int32_t speed;

	uint16_t id;
	bool premium;
};

class Effects
{
public:
	bool reload();
	bool loadFromXml();
	Effect* getEffectByID(uint16_t id);
	Effect* getEffectByName(std::string_view name);


	const std::vector<Effect>& getEffects() const { return effects; }

private:
	std::vector<Effect> effects;
};

#endif // FS_EFFECTS_H