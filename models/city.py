class State(BaseModel, Base):
    """ The state class, contains a name and a list of cities """
    # ...

    @property
    def cities(self):
        from models.city import City
        city_list = []
        for city in storage.all(City).values():
            if city.state_id == self.id:
                city_list.append(city)
        return city_list
